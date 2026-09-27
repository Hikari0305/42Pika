import random

ALL_ACHIEVEMENTS = [
    "First Steps",
    "Master Explorer",
    "Boss Slayer",
    "Treasure Hunter",
    "Crafting Genius",
    "World Savior",
    "Collector Supreme",
    "Untouchable",
    "Strategist",
    "Speed Runner",
    "Unstoppable",
    "Survivor",
    "Sharp Mind",
    "Hidden Path Finder",
]


def gen_player_achievements() -> set[str]:
    count = random.randint(3, 7)
    selected = random.sample(ALL_ACHIEVEMENTS, count)
    return set(selected)


def main() -> None:
    print("=== Achievement Tracker System ===")

    players = {
        "Alice": gen_player_achievements(),
        "Bob": gen_player_achievements(),
        "Charlie": gen_player_achievements(),
        "Dylan": gen_player_achievements(),
    }

    for name, achievements in players.items():
        print(f"Player {name}: {achievements}")

    player_sets = list(players.values())

    all_distinct = set.union(*player_sets)
    print(f"All distinct achievements: {all_distinct}")

    common = set.intersection(*player_sets)
    print(f"Common achievements: {common}")

    for name, p_set in players.items():
        other_sets = []
        for other_name, other_set in players.items():
            if other_name != name:
                other_sets.append(other_set)
        other_all = set.union(*other_sets)
        only_player = set.difference(p_set, other_all)
        print(f"Only {name} has: {only_player}")

    master_set = set(ALL_ACHIEVEMENTS)
    for name, p_set in players.items():
        missing = set.difference(master_set, p_set)
        print(f"{name} is missing: {missing}")


if __name__ == "__main__":
    main()