from abc import ABC, abstractmethod
from collections import deque
from typing import Any, Sequence, Protocol


class DataProcessor(ABC):

    def __init__(self) -> None:
        self._data_queue: deque[str] = deque()
        self._processed_count: int = 0
        self._rank_counter: int = 0

    @abstractmethod
    def validate(self, data: Any) -> bool:
        pass

    @abstractmethod
    def ingest(self, data: Any) -> None:
        pass

    def output(self) -> tuple[int, str]:
        if not self._data_queue:
            raise IndexError("No data in queue")

        rank = self._rank_counter
        self._rank_counter += 1

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

    def ingest(self, data: int | float | Sequence[int | float]) -> None:
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


class ExportPlugin(Protocol):

    def process_output(self, data: list[tuple[int, str]]) -> None:
        ...


class CSVExportPlugin:

    def process_output(self, data: list[tuple[int, str]]) -> None:
        csv_line = ",".join(val for _, val in data)
        print("CSV Output:")
        print(csv_line)


class JSONExportPlugin:

    def process_output(self, data: list[tuple[int, str]]) -> None:
        items = [f'"item_{rank}": "{val}"' for rank, val in data]
        json_body = ", ".join(items)
        print("JSON Output:")
        print(f"{{{json_body}}}")


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
                    f"DataStream error - "
                    f"Can't process element in stream: {elem}"
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
                f"{name}: total {total} items processed, "
                f"remaining {remaining} on processor"
            )

    def output_pipeline(self, nb: int, plugin: ExportPlugin) -> None:
        for proc in self.processors:
            extracted: list[tuple[int, str]] = []
            count_to_extract = min(nb, len(proc._data_queue))
            for _ in range(count_to_extract):
                extracted.append(proc.output())

            if extracted:
                plugin.process_output(extracted)


if __name__ == "__main__":
    print("=== Code Nexus - Data Pipeline ===")
    print("Initialize Data Stream...")
    ds = DataStream()

    ds.print_processors_stats()

    num_proc = NumericProcessor()
    text_proc = TextProcessor()
    log_proc = LogProcessor()

    print("Registering Processors")
    ds.register_processor(num_proc)
    ds.register_processor(text_proc)
    ds.register_processor(log_proc)

    batch1 = [
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

    print(f"Send first batch of data on stream: {batch1}")
    ds.process_stream(batch1)
    ds.print_processors_stats()

    print("Send 3 processed data from each processor to a CSV plugin:")
    csv_plugin = CSVExportPlugin()
    ds.output_pipeline(3, csv_plugin)
    ds.print_processors_stats()

    batch2 = [
        21,
        ["I love AI", "LLMs are wonderful", "Stay healthy"],
        [
            {"log_level": "ERROR", "log_message": "500 server crash"},
            {
                "log_level": "NOTICE",
                "log_message": "Certificate expires in 10 days",
            },
        ],
        [32, 42, 64, 84, 128, 168],
        "World hello",
    ]

    print(f"Send another batch of data: {batch2}")
    ds.process_stream(batch2)
    ds.print_processors_stats()

    print("Send 5 processed data from each processor to a JSON plugin:")
    json_plugin = JSONExportPlugin()
    ds.output_pipeline(5, json_plugin)
    ds.print_processors_stats()
