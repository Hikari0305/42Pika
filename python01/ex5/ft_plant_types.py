#!/usr/bin/env python3

class Plant:
    
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height if height >= 0 else 0.0
        self._age = age if age >= 0 else 0

    def grow(self, cm: float = 1.0):
        self._height += cm
    
    def age_one_day(self):
        self._age += 1
    
    def show(self):
        print(f"{self.name}: {round(Self._height, 1)}cm, {self._age} days old")

class Flower(Plant):

    def __init__(self, name: str, height: float, age: int, color: str):
        super().__init__(name, height, age)
        self.color = color
        self.is_blooming = False

    def bloom(self):
        self.is_blooming = True
    
    def show(self):
        super().show()
        print(f"Color: {self.color}")
        if self.is_blooming:
            print(f"{self.name} is blooming beautifully!")
        else:
            print(f"{self.name} has not bloomed yet")

class Tree(Plant):

    def __init__(
        self, name: str, height: float, age: int, trunk_diameter: float):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
    
    def produce_shade(self):
        print(f"Tree{self.name} now produces a shade of "
        f"{round(self._height, 1)}cm long and {round(self.trunk_diameter, 1)}cm wide.")
    
    def show(self):
        super().show()
        print(f"Trunk diameter: {round(Self.trunk_diameter, 1)}cm")

class Vegetable(Plant):

    def __init__(self, name: str, height: float, age: int, harvest_season: str):
        super().__init__(name, height, age)
        self.harvest_season = harvest_season
        self.nutritional_value = 0
    
    def grow_and_age(self, days: int, height_per_day: float = 2.1):
        for _ in range(days):
           self.grow(height_per_day)
           self.age_one_day()
        self.nutritional_value += days

    def show(self):
        super().show()
        print(f"Harvest season: {self.harvest_season}")
        print(f"Nutritional value: {self.nutritional_value}")

def main():
    print("=== Garden Plant Types ===")

    print("=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    print("[asking the rose to blooom]")
    rose.bloom()
    rose.show()

    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    print("[asking the oak to produce shade]")
    oak.produce_shade()

    print("=== Vegetable")
    tomato = Vegetable("Tomato", 5.0, 10, "April")
    tomato.show()
    print("[make tomato grow and age for 20 days]")
    tomato.grow_and_age(20, height_per_day=2.1)
    tomato.show()

if __name__ == "__main__":
    main()
