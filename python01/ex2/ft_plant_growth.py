#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, height: float, age: int, growth_rate: float = 0.8) -> None:
        self.name = name
        self.height = height
        self.age = age
        self.growth_rate = growth_rate
    
    def grow(self)-> None:
        self.height += self.growth_rate

    def age_one_day(self)-> None:
        self.age += 1

    def show(self) -> None:
        print(f"{self.name}: {round(self.height, 1)}cm, {self.age} days old")

def main() -> None:
    rose = Plant("Rose", 25.0, 30, growth_rate=0.8)

    print("=== Garden Plant Growth ===")
    rose.show()

    initial_height = rose.height 
    for day in range (1, 8):
        rose.grow()
        rose.age_one_day()
        print(f"=== Day {day} ===")
        rose.show()

    growth_this_week = round(rose.height - initial_height, 1)
    print(f"Growth this week: {growth_this_week}cm")

if __name__ == "__main__":
    main()

