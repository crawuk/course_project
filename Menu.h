#ifndef Menu_h
#define Menu_h
#include "Character_creation.h"
#include <iostream>


class Menu
{
private:
    
    std::string name, characher_class;
    int level = 1, money = 0, dex, intellegence, defence, damage;
    
public:
    
    Menu(int a, int b, int c, int d, string e, string f)
    {
        dex = a;
        intellegence = b;
        defence = c;
        damage = d;
        name = e;
        characher_class = f;
    }
    
    void go_to_dungeon()
    {
        cout << "you are in the dungeon\n" << endl;
    }
    
    void get_info_about_character()
    {
        cout << "\nINFO about your character:\nName: " << this->name << "\nClass: " << this->characher_class << "\nDexterity = " << dex << "\nIntellegence = " << intellegence << "\nDefence = " << defence << "\nDamage = " << damage << "\nLevel = " << level << "\nMoney = " << money << endl << endl;
    }
    
    void shop()
    {
        cout << "there is a shop\n" << endl;
    }
    
    void end_game()
    {
        cout << "end? :c" << endl;
    }
};



#endif /* Menu_h */
