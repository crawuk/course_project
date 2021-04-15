#ifndef Character_creation_h
#define Character_creation_h


using namespace std;
#include <iostream>
#include <string>
#include "Start_game.h"

class Character : public Begin
{
protected:
    
    string name;
    //int level = 0, money = 0, dex = 0, intellegence = 0, defence = 0, damage = 0;
    string player_class;
    
public:
    
    void get_name_from_user();
    void choose_a_class();
    
};
#endif /* Character_creation_h */
