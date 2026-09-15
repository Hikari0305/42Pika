#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, hright: float, age: int):
        self.name = nameself.height = float(height)
        self.age = int(age)
    def show(Self):
        print(f"Created: {self.name}: {round(Self.height, 1)}cm, {self.age} days old")

def main():
    plant_data = [
        ("Rose", 25.0, 30),
        ("Oak", 200.0, 365),
        ("Cactus", 5.0, 90),
        ("Sunflower", 80.0, 45),
        ("Fern", 15.0, 120),
    ]

    print("=== Plant Factory Output ===")

    for name, height, age in plant_data:
        plant = Plant(name, height, age)
        plant.show()

if __name__ == "__main__":
    main()