#ifndef Start_h
#define Start_h

#endif
using namespace std;
#include <iostream>
#include <string>
#include "Start_game.h"

class Character : public Begin
{
protected:
    
    string name;
    int level = 0, money = 0, dex = 0, intellegence = 0, defence = 0, damage = 0;
    string player_class;
    
public:
    
    void get_info();
    void get_name_from_user();
    void get_name();
    void choose_a_class();
    
};


class Wizard : public Character
{
private:
    
    

public:
    
    Wizard ()
    {
        level = 1;
        money = 0;
        dex = 5;
        intellegence = 15;
        damage = 10;
        defence = 5;
    }
    
};

class Warrior : public Character
{
public:
    
    Warrior()
    {
        level = 1;
        money = 0;
        dex = 10;
        intellegence = 0;
        damage = 10;
        defence = 15;
    }
    
};

class Assasin : public Character
{
    
public:
    
    Assasin()
    {
        level = 1;
        money = 0;
        dex = 15;
        intellegence = 5;
        damage = 10;
        defence = 5;
    }
    
};

class Archer : public Character
{
    
public:
    
    Archer()
    {
        level = 1;
        money = 0;
        dex = 5;
        intellegence = 5;
        damage = 10;
        defence = 15;
    }
    
};
