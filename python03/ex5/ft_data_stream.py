import random
from typing import Generator

PLAYERS = ["alice", "bob", "charlie", "dylan"]
ACTIONS = [
    "run",
    "eat",
    "sleep",
    "grab",
    "move",
    "climb",
    "swim",
    "release",
    "use",
]


def gen_event() -> Generator[tuple[str, str], None, None]:
    while True:
        player = random.choice(PLAYERS)
        action = random.choice(ACTIONS)
        yield (player, action)


def consume_event(
    event_list: list[tuple[str, str]],
) -> Generator[tuple[str, str], None, None]:
    while len(event_list) > 0:
        index = random.randrange(len(event_list))
        event = event_list.pop(index)
        yield event


def main() -> None:
    print("=== Game Data Stream Processor ===")

    stream = gen_event()
    for i in range(1000):
        event = next(stream)
        print(f"Event {i}: Player {event[0]} did action {event[1]}")

    stream2 = gen_event()
    event_list = []
    for _ in range(10):
        event = next(stream2)
        event_list.append(event)
    print(f"Built list of 10 events: {event_list}")

    for event in consume_event(event_list):
        print(f"Got event from list: {event}")
        print(f"Remains in list: {event_list}")


if __name__ == "__main__":
    main()