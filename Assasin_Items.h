#ifndef Assasin_Items_h
#define Assasin_Items_h
#include "Shop.h"

class Assasin_Items : public Shop
{
public:
    
    void stats() override;
    bool check_assortment(int player_money, int player_level, bool bought_items[3]) override;
    
};

#endif /* Assasin_Items_h */
