#ifndef Shop_h
#define Shop_h
#include "Menu.h"
#include "IShop.h"
#include <vector>

class Shop : public IShop
{
protected:
    
    std::vector<std::string> names;
    std::vector<int> boost_hp;
    std::vector<int> boost_damage;
    std::vector<int> cost;
    std::vector<int> levels;
    int number_of_bought_item;
    bool bought_status[3] = {false, false, false};
    int hp_return, damage_return = 0, cost_return = 0;
    virtual void stats() = 0;
    void wanna_buy_message();
    bool wanna_buy(std::vector<std::string> NAMES, std::vector<int> BOOST_HP, std::vector<int> BOOST_DAMAGE, std::vector<int> COST, std::vector<int> LEVELS, int player_money, int player_level, bool bought_items[3]);
    void assort(std::vector<std::string> NAMES, std::vector<int> BOOST_HP, std::vector<int> BOOST_DAMAGE, std::vector<int> COST, std::vector<int> LEVELS);
    
public:
    
    Shop() {};
    
    int get_number_of_bought_item() override;
    int get_returned_defence() override;
    int get_returned_damage() override;
    int get_returned_cost() override;
};

#endif /* Shop_h */
