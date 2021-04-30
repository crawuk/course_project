#ifndef Assortment_h
#define Assortment_h
#include "Shop.h"

class Assortment : public Shop
{
public:
    
    void stats() override;
    bool check_assortment(int player_money, int player_level, bool bought_items[3]) override;
    bool go_shoping(IShop *item, int player_money, int player_level, bool bought_items[3]);
    
};

#endif /* Assortment_h */
