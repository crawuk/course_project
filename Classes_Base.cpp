#include "Classes_Base.hpp"

Classes_Base::Classes_Base()
{
    level = money = dex = intelligence = defence = damage = 0;
    name = player_class = "";
}

void Classes_Base:: message_after_class_creation()
{
    std::cout << "Your character is created. Let's begin!" << std::endl;
}

std::string Classes_Base:: get_name()
{
    return this->name;
}

std::string Classes_Base:: get_class()
{
    return this->player_class;
}

int Classes_Base:: get_dex()
{
    return this->dex;
}

int Classes_Base:: get_intellegence()
{
    return this->intelligence;
}

int Classes_Base:: get_defence()
{
    return this->defence;
}

int Classes_Base:: get_damage()
{
    return this->damage;
}


