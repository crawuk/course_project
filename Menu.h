#ifndef Menu_h
#define Menu_h
#include "Shop.h"
#include "IMenu.h"
#include <iostream>

class Menu : public IMenu
{
protected:
    
    std::string name, characher_class;
    bool bought_items[3] = {0, 0, 0};
    unsigned int level = 1, money = 0, dexterity, intellegence, defence, damage, dungeon_level = 0;
    int hp = 100;
    int player_input;
    
    void go_to_dungeon() override;
    void get_info_about_character() override;
    void shop(bool bought_items[3]) override;
    int end_game() override;
    void change_player_stats(Menu purchase) ;
    
public:
    
    Menu(int a, int b, int c, int d, std::string e, std::string f);
    Menu(int hp, int damage, int cost);
    Menu(int a);
    Menu();
    friend Menu operator + (Menu &v1, Menu &v2)
    {
        return Menu(v1.defence + v2.defence, v1.damage + v2.damage, v1.money - v2.money);
    }
    friend Menu operator - (Menu&v1, Menu &v2)
    {
        return Menu(v1.money - v2.money);
    }
    
    void where_to_go() override;
    void go_back() override;
    
    
    
    
};



#endif /* Menu_h */
