#ifndef Player_h
#define Player_h
#include "Classes_Base.hpp"

class Player : public Classes_Base
{
public:
    
    Player();
    Player(string class_name, int dex, int intelligence, int defence, int damage);
    void stats(string player_class, string name) override;
    std::string get_class_story() override;
    void character_creation(Classes_Base *player, std::string name, string player_class);
    
};

#endif /* Player_h */
