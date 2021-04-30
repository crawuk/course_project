#include <stdio.h>
#include "Dungeon.h"
#include "Monster.h"

Dungeon :: Dungeon () {};

bool Dungeon :: monster_fight(int dungeon_level, int damage, int dexterity, int intellegence, int hp, int defence, int money)
{
    Monster first(name_array[dungeon_level], story_array[dungeon_level], level_array[dungeon_level], health_array[dungeon_level], damage_array[dungeon_level], defence_array[dungeon_level], gold_array[dungeon_level]);
    return is_monster_defeated(dungeon_level, damage, dexterity, intellegence, hp, defence, money);
}
