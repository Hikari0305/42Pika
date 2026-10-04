from elements import create_fire
from alchemy.potions import strength_potion
from ..elements import create_air


def lead_to_gold() -> str:
    air = create_air()
    strength = strength_potion()
    fire = create_fire()
    return (
        f"Recipe transmuting Lead to Gold: "
        f"brew '{air}' and '{strength}' mixed with '{fire}'"
    )