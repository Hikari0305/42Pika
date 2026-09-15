#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height if height >= 0 else0.0
        self._age = age if age >= 0 else 0

        print(
            f"Plant created: {self.name}: {round(self._height, 1)}cm, "
            f"{self._age} days old"
        )

        def get_height(self) -> float:
            return self._height

        def get_age(self) -> int:
            return self._age
        
        def set_height(self, height: float):
            if height < 0:
                print(f"{self.name}: Error, height can't br nrgative")
                print("Height update rejected")
            else:
                self._height = height
                print(f"Height update: {int(height)}cm")
            
        def set_age(self, age: int):
            if age < 0:
                print(f"{self.name}: Error, age can't br nrgative")
                print("Age update rejected")
            else:
                self._age = age
                print(f"Age update: {int(age)}cm")

        def show(self):
            print(
                f"Current state: {self.name}: {round(self._height, 1)}cm, "
                f"{self._age} days old"
            )

def main():
    print("=== Garden Security System ===")
    rose = PLant("Rose", 15.0, 10)

    rose.set_height(25)
    rose._set_age(30)

    rose.set_height(-5)
    rose._set_age(-10)

    rose.show()

if __name__ = "__main__":
    main()
