#ifndef Dungeon_h
#define Dungeon_h
#include "Menu.h"
#include "Monster.h"
using namespace std;
#include <iostream>
#include <string>

class Dungeon : public Monster
{
public:
    
    Dungeon ();
    bool monster_fight(int dungeon_level, int damage, int dexterity, int intellegence, int hp, int defence, int money);
    
};

#endif /* Dungeon_h */
