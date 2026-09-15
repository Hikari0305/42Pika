#!/usr/bin/env python3


class Plant:
    """基本となる植物クラス"""

    # ネストクラス（統計情報保持用）
    class Stats:
        def __init__(self):
            self._grow_calls = 0
            self._age_calls = 0
            self._show_calls = 0

        def increment_grow(self):
            self._grow_calls += 1

        def increment_age(self):
            self._age_calls += 1

        def increment_show(self):
            self._show_calls += 1

        def display(self):
            print(
                f"Stats: {self._grow_calls} grow, "
                f"{self._age_calls} age, "
                f"{self._show_calls} show"
            )

    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height if height >= 0 else 0.0
        self._age = age if age >= 0 else 0
        self.stats = self.Stats()

    # 静的メソッド: 指定された日数が1年（365日）を超えているか判定
    @staticmethod
    def is_older_than_a_year(age_in_days: int) -> bool:
        return age_in_days > 365

    # クラスメソッド: 匿名（情報が未確定）の植物インスタンスを生成
    @classmethod
    def create_anonymous(cls):
        return cls(name="Unknown plant", height=0.0, age=0)

    def grow(self, cm: float = 8.0):
        self._height += cm
        self.stats.increment_grow()

    def age_one_day(self, days: int = 1):
        self._age += days
        self.stats.increment_age()

    def show(self):
        self.stats.increment_show()
        print(f"{self.name}: {round(self._height, 1)}cm, {self._age} days old")


class Flower(Plant):
    """花クラス"""

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


class Seed(Flower):
    """Flowerを継承し、種子の数を管理するクラス"""

    def __init__(
        self, name: str, height: float, age: int, color: str, seeds: int = 42
    ):
        super().__init__(name, height, age, color)
        self._seed_count = seeds

    def show(self):
        super().show()
        if self.is_blooming:
            print(f"Seeds: {self._seed_count}")
        else:
            print("Seeds: 0")


class Tree(Plant):
    """木クラス（統計拡張版）"""

    class TreeStats(Plant.Stats):
        """Plant.Statsを拡張して日陰カウントを追加"""

        def __init__(self):
            super().__init__()
            self._shade_calls = 0

        def increment_shade(self):
            self._shade_calls += 1

        def display(self):
            super().display()
            print(f"{self._shade_calls} shade")

    def __init__(
        self, name: str, height: float, age: int, trunk_diameter: float
    ):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        # Tree専用の拡張Statsクラスに置き換え
        self.stats = self.TreeStats()

    def produce_shade(self):
        self.stats.increment_shade()
        print(
            f"Tree {self.name} now produces a shade of "
            f"{round(self._height, 1)}cm long and {round(self.trunk_diameter, 1)}cm wide."
        )

    def show(self):
        super().show()
        print(f"Trunk diameter: {round(self.trunk_diameter, 1)}cm")


# クラス外のスタンドアロン関数: 任意の植物の統計を表示
def display_plant_stats(plant: Plant):
    print(f"[statistics for {plant.name}]")
    plant.stats.display()


def main():
    print("=== Garden statistics ===")

    # --- Check year-old ---
    print("=== Check year-old")
    print(
        f"Is 30 days more than a year? -> {Plant.is_older_than_a_year(30)}"
    )
    print(
        f"Is 400 days more than a year? -> {Plant.is_older_than_a_year(400)}"
    )

    # --- Flower ---
    print("=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    display_plant_stats(rose)

    print("[asking the rose to grow and bloom]")
    rose.grow(8.0)
    rose.bloom()
    rose.show()
    display_plant_stats(rose)

    # --- Tree ---
    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    display_plant_stats(oak)

    print("[asking the oak to produce shade]")
    oak.produce_shade()
    display_plant_stats(oak)

    # --- Seed ---
    print("=== Seed")
    sunflower = Seed("Sunflower", 80.0, 45, "yellow", seeds=42)
    sunflower.show()

    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30.0)
    sunflower.age_one_day(20)
    sunflower.bloom()
    sunflower.show()
    display_plant_stats(sunflower)

    # --- Anonymous ---
    print("=== Anonymous")
    unknown = Plant.create_anonymous()
    unknown.show()
    display_plant_stats(unknown)


if __name__ == "__main__":
    main()