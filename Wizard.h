#ifndef Wizard_h
#define Wizard_h
#include "Classes_Base.hpp"

class Wizard : public Classes_Base
{
public:
    
    void stats(string player_class, string name) override;
    std::string get_class_story() override;
    
};

#endif /* Wizard_h */
