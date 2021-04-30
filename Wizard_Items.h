#ifndef Wizard_Items_h
#define Wizard_Items_h
#include "Shop.h"

class Wizard_Items : public Shop
{
public:
    
    Wizard_Items() {};
    void stats() override;
    bool check_assortment(int player_money, int player_level, bool bought_items[3]) override;
    
};

#endif /* Wizard_Items_h */
