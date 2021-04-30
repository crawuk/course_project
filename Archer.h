#ifndef Archer_h
#define Archer_h
#include "Classes_Base.hpp"

class Archer : public Classes_Base
{
public:
    
    void stats(string player_class, string name) override;
    std::string get_class_story() override;
    
};

#endif /* Archer_h */
