#ifndef IShop_h
#define IShop_h

class IShop
{
public:
    
    IShop() {};
    virtual int get_number_of_bought_item() = 0;
    virtual int get_returned_defence() = 0;
    virtual int get_returned_damage() = 0;
    virtual int get_returned_cost() = 0;
    virtual bool check_assortment(int player_money, int player_level, bool bought_items[3]) = 0;
    
};

#endif /* IShop_h */
