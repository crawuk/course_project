#ifndef Assasin_h
#define Assasin_h
#include "Classes_Base.hpp"


class Assasin : public Classes_Base
{
public:
    
    void stats(string player_class, string name) override;
    std::string get_class_story() override;
    
};

#endif /* Assasin_h */
