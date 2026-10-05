from abc import ABC, abstractmethod
from typing import List
from ex0.creature import Creature
from ex1.capabilities import HealCapability, TransformCapability
from ex2.exceptions import InvalidStrategyError


class BattleStrategy(ABC):
    @abstractmethod
    def is_valid(self, creature: Creature) -> bool:
        pass
    
    @abstractmethod
    def act(self, creature: Creature) -> List[str]:
        pass


class NormalStrategy(BattleStrategy):
    def is_valid(self, creature: Creature) -> bool:
        return isinstance(creature, Creature)

    def act(self, creature: Creature) -> List[str]:
        if not self.is_valid(creature):
            raise InvalidStrategyError(
                f"Invalid Creature '{creature.name}' for this normal strategy"
            )
        return [creature.attack()]


class AggressiveStrategy(BattleStrategy):
    def is_valid(self, creature: Creature) -> bool:
        return isinstance(creature, TransformCapability)
    
    def act(self, creature: Creature) -> List[str]:
        if not self.is_valid(creature) or not isinstance(creature, TransformCapability):
            raise InvalidStrategyError(
                f"Invalid Creature '{creature.name}' for this aggressive strategy"
            )
        actions: List[str] = []
        actions.append(creature.transform())
        actions.append(creature.attack())
        actions.append(creature.revert())
        return actions


class DefensiveStrategy(BattleStrategy):
    def is_valid(self, creature: Creature) -> bool:
        return isinstance(creature, HealCapability)
    
    def act(self, creature: Creature) -> List[str]:
        if not self.is_valid(creature) or not isinstance(creature, HealCapability):
            raise InvalidStrategyError(
                f"Invalid Creature '{creature.name}' for this defensive strategy"
            )
        actions: List[str] = []
        actions.append(creature.attack())
        actions.append(creature.heal())
        return actions