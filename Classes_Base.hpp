#ifndef Classes_hpp
#define Classes_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include "IClasses.h"
using namespace std;

class Classes_Base : public IClasses
{
protected:
    
    std::string name, player_class;
    int level, money, dex, intelligence, defence, damage;
    void message_after_class_creation() override;

public:
    
    Classes_Base();
    virtual void stats(string player_class, string name) = 0;
    std::string get_name() override;
    std::string get_class() override;
    virtual std::string get_class_story() = 0;
    int get_dex() override;
    int get_intellegence() override;
    int get_defence() override;
    int get_damage() override;

};

#endif /* Classes_hpp */
