#ifndef Warrior_Items_h
#define Warrior_Items_h
#include "Shop.h"

class Warrior_Items : public Shop
{
public:
    
    void stats() override;
    bool check_assortment(int player_money, int player_level, bool bought_items[3]) override;
    
};

#endif /* Warrior_Items_h */
