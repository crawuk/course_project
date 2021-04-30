#include <stdio.h>
#include "Warrior_Items.h"

void Warrior_Items:: stats()
{
    names = {"Blood ring", "Dragonscale chailmaille", "Dragonite sword"};
    boost_hp = {1, 9, 0};
    boost_damage = {4, 4, 12};
    cost = {500, 1000, 1700};
    levels = {8, 15, 19};
}

bool Warrior_Items:: check_assortment(int player_money, int player_level, bool bought_items[3])
{
    Warrior_Items::stats();
    assort(names, boost_hp, boost_damage, cost, levels);
    wanna_buy_message();
    return wanna_buy(names, boost_hp, boost_damage, cost, levels, player_money, player_level, bought_items);
}
