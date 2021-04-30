#include <stdio.h>
#include "Assasin_Items.h"

void Assasin_Items:: stats()
{
    names = {"Lotus leaf pendant", "Silk robe", "Two-handed blades"};
    boost_hp = {5, 18, 2};
    boost_damage = {0, 0, 6};
    cost = {500, 1000, 1700};
    levels = {8, 15, 19};
}

bool Assasin_Items:: check_assortment(int player_money, int player_level, bool bought_items[3])
{
    Assasin_Items::stats();
    assort(names, boost_hp, boost_damage, cost, levels);
    wanna_buy_message();
    return wanna_buy(names, boost_hp, boost_damage, cost, levels, player_money, player_level, bought_items);
}
