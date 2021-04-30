#ifndef Archer_Items_h
#define Archer_Items_h
#include "Shop.h"

class Archer_Items : public Shop
{
public:
    
    void stats() override;
    bool check_assortment(int player_money, int player_level, bool bought_items[3]) override;
    
};

#endif /* Archer_Items_h */
