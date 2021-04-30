#ifndef Warrior_h
#define Warrior_h
#include "Classes_Base.hpp"

class Warrior : public Classes_Base
{
public:
    
    void stats(string player_class, string name) override;
    std::string get_class_story() override;
    
};

#endif /* Warrior_h */
