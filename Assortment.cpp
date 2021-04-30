#include <stdio.h>
#include "Assortment.h"

int Shop:: get_number_of_bought_item()
{
    return this->number_of_bought_item;
}

void Assortment:: stats()
{
    
}

bool Assortment:: check_assortment(int player_money, int player_level, bool bought_items[3])
{
    return true;
}

bool Assortment:: go_shoping(IShop *item, int player_money, int player_level, bool bought_items[3])
{
    return item->check_assortment(player_money, player_level, bought_items);
}
