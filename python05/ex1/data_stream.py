from abc import ABC, abstractmethod
from collections import deque
from typing import Any


class DataProcessor(ABC):

    def __init__(self) -> None:
        self._data_queue: deque[str] = deque()
        self._processed_count: int = 0
        self._output_counter: int = 0

    @abstractmethod
    def validate(self, data: Any) -> bool:
        pass

    @abstractmethod
    def ingest(self, data: Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        if not self._data_queue:
            raise IndexError("No data in queue")
        rank = self._output_counter
        self._output_counter += 1
        data = self._data_queue.popleft()
        return rank, data


class NumericProcessor(DataProcessor):

    def validate(self, data: Any) -> bool:
        if isinstance(data, (int, float)) and not isinstance(data, bool):
            return True
        if isinstance(data, list) and data:
            return all(
                isinstance(x, (int, float)) and not isinstance(x, bool)
                for x in data
            )
        return False

    def ingest(self, data: int | float | list[int | float]) -> None:
        if not self.validate(data):
            raise ValueError("Improper numeric data")
        if isinstance(data, list):
            for item in data:
                self._data_queue.append(str(item))
                self._processed_count += 1
        else:
            self._data_queue.append(str(data))
            self._processed_count += 1


class TextProcessor(DataProcessor):

    def validate(self, data: Any) -> bool:
        if isinstance(data, str):
            return True
        if isinstance(data, list) and data:
            return all(isinstance(x, str) for x in data)
        return False

    def ingest(self, data: str | list[str]) -> None:
        if not self.validate(data):
            raise ValueError("Improper text data")
        if isinstance(data, list):
            for item in data:
                self._data_queue.append(item)
                self._processed_count += 1
        else:
            self._data_queue.append(data)
            self._processed_count += 1


def format_log(d: dict[str, str]) -> str:
    if "log_level" in d and "log_message" in d:
        return f"{d['log_level']}: {d['log_message']}"
    return ", ".join(f"{k}: {v}" for k, v in d.items())


class LogProcessor(DataProcessor):

    def validate(self, data: Any) -> bool:
        if isinstance(data, dict):
            return all(
                isinstance(k, str) and isinstance(v, str)
                for k, v in data.items()
            )
        if isinstance(data, list) and data:
            return all(
                isinstance(x, dict)
                and all(
                    isinstance(k, str) and isinstance(v, str)
                    for k, v in x.items()
                )
                for x in data
            )
        return False

    def ingest(self, data: dict[str, str] | list[dict[str, str]]) -> None:
        if not self.validate(data):
            raise ValueError("Improper log data")
        if isinstance(data, list):
            for item in data:
                self._data_queue.append(format_log(item))
                self._processed_count += 1
        else:
            self._data_queue.append(format_log(data))
            self._processed_count += 1


class DataStream:

    def __init__(self) -> None:
        self.processors: list[DataProcessor] = []

    def register_processor(self, proc: DataProcessor) -> None:
        self.processors.append(proc)

    def process_stream(self, stream: list[Any]) -> None:
        for elem in stream:
            handled = False
            for proc in self.processors:
                if proc.validate(elem):
                    proc.ingest(elem)
                    handled = True
                    break
            if not handled:
                print(
                    f"DataStream error - Can't process element in stream: {elem}"
                )

    def print_processors_stats(self) -> None:
        print("== DataStream statistics ==")
        if not self.processors:
            print("No processor found, no data")
            return

        name_map = {
            NumericProcessor: "Numeric Processor",
            TextProcessor: "Text Processor",
            LogProcessor: "Log Processor",
        }

        for proc in self.processors:
            name = name_map.get(type(proc), proc.__class__.__name__)
            total = proc._processed_count
            remaining = len(proc._data_queue)
            print(
                f"{name}: total {total} items processed, remaining {remaining} on processor"
            )


if __name__ == "__main__":
    print("=== Code Nexus - Data Stream ===")
    print("Initialize Data Stream...")
    ds = DataStream()

    ds.print_processors_stats()

    num_proc = NumericProcessor()
    text_proc = TextProcessor()
    log_proc = LogProcessor()

    print("Registering Numeric Processor")
    ds.register_processor(num_proc)

    batch = [
        "Hello world",
        [3.14, -1, 2.71],
        [
            {
                "log_level": "WARNING",
                "log_message": "Telnet access! Use ssh instead",
            },
            {"log_level": "INFO", "log_message": "User wil is connected"},
        ],
        42,
        ["Hi", "five"],
    ]

    print(f"Send first batch of data on stream: {batch}")
    ds.process_stream(batch)

    ds.print_processors_stats()

    print("Registering other data processors")
    ds.register_processor(text_proc)
    ds.register_processor(log_proc)

    print("Send the same batch again")
    ds.process_stream(batch)

    ds.print_processors_stats()

    print(
        "Consume some elements from the data processors: Numeric 3, Text 2, Log 1"
    )
    for _ in range(3):
        num_proc.output()
    for _ in range(2):
        text_proc.output()
    for _ in range(1):
        log_proc.output()

    ds.print_processors_stats()