#include <stdio.h>
#include "Wizard_Items.h"

void Wizard_Items::stats()
{
    names = {"Blue fire necklace", "Enchanted cloak", "Rune of strength"};
    boost_hp = {3, 4, 16};
    boost_damage = {1, 0, 7};
    cost = {500, 1000, 1700};
    levels = {8, 15, 19};
}

bool Wizard_Items:: check_assortment(int player_money, int player_level, bool bought_items[3])
{
    Wizard_Items::stats();
    assort(names, boost_hp, boost_damage, cost, levels);
    wanna_buy_message();
    return wanna_buy(names, boost_hp, boost_damage, cost, levels, player_money, player_level, bought_items);
}
