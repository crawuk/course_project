#include <stdio.h>
#include "Archer_Items.h"

void Archer_Items:: stats()
{
    names = {"Creeper ring", "Armored quiver of arrows", "Сompound bow"};
    boost_hp = {4, 14, 0};
    boost_damage = {0, 1, 11};
    cost = {500, 1000, 1700};
    levels = {8, 15, 19};
}

bool Archer_Items:: check_assortment(int player_money, int player_level, bool bought_items[3])
{
    Archer_Items::stats();
    assort(names, boost_hp, boost_damage, cost, levels);
    wanna_buy_message();
    return wanna_buy(names, boost_hp, boost_damage, cost, levels, player_money, player_level, bought_items);
}
