import math


def get_player_pos() -> tuple[float, float, float]:
    while True:
        raw_input = input("Enter new coordinates as floats in format 'x,y,z': ")
        parts = raw_input.split(",")

        if len(parts) != 3:
            print("Invalid syntax")
            continue

        coords = []
        has_error = False

        for part in parts:
            item = part.strip()
            try:
                val = float(item)
                coords.append(val)
            except ValueError:
                print(f"Error on parameter'{item}': could not convert string to float:'{item}'")
                has_error = True
                break
        
        if not has_error:
            return tuple(coords)


def calculate_distance(
    p1: tuple[float, float, float], p2: tuple[float, float, float]
) -> float:
    dx = p2[0] - p1[0]
    dy = p2[1] - p1[1]
    dz = p2[2] - p1[2]
    return math.sqrt(dx**2 + dy**2 + dz**2)


def main() -> None:
    print("=== Game Coordinate System ===")

    print("Get a first set of coordinates")
    pos1 = get_player_pos()
    print(f"Got a first tuple: {pos1}")
    print(f"It includes: X={pos1[0]}, Y={pos1[1]}, Z={pos1[2]}")

    center = (0.0, 0.0, 0.0)
    dist_to_center = calculate_distance(pos1, center)
    print(f"Distance to center: {round(dist_to_center, 4)}")

    print("Get a second set of coordinates")
    pos2 = get_player_pos()

    dist_between = calculate_distance(pos1, pos2)
    print(f"Distance between the 2 sets of coordinates: {round(dist_between, 4)}")


if __name__ == "__main__":
    main()