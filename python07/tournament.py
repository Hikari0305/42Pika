from typing import List, Tuple
from ex0 import CreatureFactory, FlameFactory, AquaFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory
from ex2 import(
    BattleStrategy,
    NormalStrategy,
    AggressiveStrategy,
    DefensiveStrategy,
    InvalidStrategyError,
)


def run_tournament(
    title: str,
    opponents: List[Tuple[CreatureFactory, BattleStrategy]]
) -> None:
    print(title)
    print(f"*** Tournament ***\n{len(opponents)} opponents involved")

    for i in range(len(opponents)):
        for j in range(i + 1, len(opponents)):
            f1, strat1 = opponents[i]
            f2, strat2 = opponents[j]

            c1 = f1.create_base()
            c2 = f2.create_base()

            print("* Battle *")
            print(c1.describe())
            print("vs. ")
            print(c2.describe())
            print("now fight!")

            try:
                actions1 = strat1.act(c1)
                for act in actions1:
                    print(act)
                
                actions2 = strat2.act(c2)
                for act in actions2:
                    print(act)
            
            except InvalidStrategyError as e:
                print(f"Battle error, aborting tournament: {e}")
                return


if __name__ == "__main__":
    flame_f = FlameFactory()
    aqua_f = AquaFactory()
    heal_f = HealingCreatureFactory()
    trans_f = TransformCreatureFactory()

    norm_s = NormalStrategy()
    aggr_s = AggressiveStrategy()
    defe_s = DefensiveStrategy()

    run_tournament(
            "Tournament 0 (basic)",
            [(flame_f, norm_s), (heal_f, defe_s)]
        )
        print()

        run_tournament(
            "Tournament 1 (error)",
            [(flame_f, aggr_s), (heal_f, defe_s)]
        )
        print()

        run_tournament(
            "Tournament 2 (multiple)",
            [(aqua_f, norm_s), (heal_f, defe_s), (trans_f, aggr_s)]
        )