#!/usr/bin/env python3


class Plant:

    class Stats:

        def __init__(self) -> None:
            self._grow_count: int = 0
            self._age_count: int = 0
            self._show_count: int = 0

        def log_grow(self) -> None:
            self._grow_count += 1

        def log_age(self) -> None:
            self._age_count += 1

        def log_show(self) -> None:
            self._show_count += 1

        def display(self) -> None:
            print(f"Stats: {self._grow_count} grow, "
                  f"{self._age_count} age, {self._show_count} show")

    def __init__(self, name: str, height: float, age: int) -> None:
        self._name: str = name
        self._height: float = height
        self._age: int = age
        self.stats: Plant.Stats = self.Stats()

    @staticmethod
    def is_older_than_a_year(age: int) -> bool:
        return age > 365

    @classmethod
    def create_anonymous(cls) -> "Plant":
        return cls("Unknown plant", 0.0, 0)

    def grow(self, amount: float = 8.0) -> None:
        self.stats.log_grow()
        self._height += amount

    def age_up(self, days: int = 1) -> None:
        self.stats.log_age()
        self._age += days

    def show(self) -> None:
        self.stats.log_show()
        print(f"{self._name}: {round(self._height, 1)}cm, {self._age} days old")


class Flower(Plant):

    def __init__(
        self, name: str, height: float, age: int, color: str
    ) -> None:
        super().__init__(name, height, age)
        self.color: str = color
        self._is_blooming: bool = False

    def bloom(self) -> None:
        self._is_blooming = True

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")
        if self._is_blooming:
            print(f"{self._name} is blooming beautifully!")
        else:
            print(f"{self._name} has not bloomed yet")


class Seed(Flower):

    def __init__(
        self, name: str, height: float, age: int, color: str, seeds: int = 0
    ) -> None:
        super().__init__(name, height, age, color)
        self.seeds: int = seeds

    def bloom(self) -> None:
        super().bloom()
        if self.seeds == 0:
            self.seeds = 42

    def show(self) -> None:
        super().show()
        print(f"Seeds: {self.seeds}")


class Tree(Plant):

    class TreeStats(Plant.Stats):

        def __init__(self) -> None:
            super().__init__()
            self._shade_count: int = 0

        def log_shade(self) -> None:
            self._shade_count += 1

        def display(self) -> None:
            super().display()
            print(f"{self._shade_count} shade")

    def __init__(
        self, name: str, height: float, age: int, trunk_diameter: float
    ) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter: float = trunk_diameter
        self.stats: Tree.TreeStats = self.TreeStats()

    def produce_shade(self) -> None:
        if isinstance(self.stats, Tree.TreeStats):
            self.stats.log_shade()
        print(f"Tree {self._name} now produces a shade of "
              f"{round(self._height, 1)}cm long and "
              f"{round(self.trunk_diameter, 1)}cm wide.")

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter: {round(self.trunk_diameter, 1)}cm")


def display_plant_analytics(plant: Plant) -> None:
    print(f"[statistics for {plant._name}]")
    plant.stats.display()


def main() -> None:
    print("=== Garden statistics ===")

    print("=== Check year-old")
    print("Is 30 days more than a year? -> "
          f"{Plant.is_older_than_a_year(30)}")
    print("Is 400 days more than a year? -> "
          f"{Plant.is_older_than_a_year(400)}")

    print("=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    display_plant_analytics(rose)

    print("[asking the rose to grow and bloom]")
    rose.grow(8.0)
    rose.bloom()
    rose.show()
    display_plant_analytics(rose)

    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    display_plant_analytics(oak)

    print("[asking the oak to produce shade]")
    oak.produce_shade()
    display_plant_analytics(oak)

    print("=== Seed")
    sunflower = Seed("Sunflower", 80.0, 45, "yellow")
    sunflower.show()

    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30.0)
    sunflower.age_up(20)
    sunflower.bloom()
    sunflower.show()
    display_plant_analytics(sunflower)

    print("=== Anonymous")
    anon = Plant.create_anonymous()
    anon.show()
    display_plant_analytics(anon)


if __name__ == "__main__":
    main()