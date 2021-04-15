#include <stdio.h>
#include "Start.h"
using namespace std;

void Character::get_info()
{
    cout << "INFO about your character:\nName: " << this->name << "\nClass: " << this->player_class << "\nDexterity = " << dex << "\nIntellegence = " << intellegence << "\nDefence = " << defence << "\nDamage = " << damage << "\nLevel = " << level << "\nMoney = " << money << endl;
}


void Character::get_name_from_user()
{
    cout << "Let's begin with your name!\nMy name is ... ";
    cin >> name;
}


void Character::get_name()
{
    cout << "Okay, I will call you " << name << endl;;
}

void Character::choose_a_class()
{
    cout << "Now it's time to choose your class\nThere are 4 classes:\n\n\tWizard\n\t\tdexterity = 5, intellegence = 15, defence = 5, damage = 10\n\n\tWarrior\n\t\tdexterity = 10, intellegence = 0, defence = 15, damage = 10\n\n\tAssasin\n\t\tdexterity = 15, intellegence = 5, defence = 5, damage = 10 \n\n\tArcher\n\t\tdexterity = 5, intellegence = 5, defence = 15, damage = 10\n\nType the name of the class that appeals to you ... ";
    
    cin >> player_class;
    
    if (player_class == "Wizard")
    {
        cout << "Now you are a Wizard!" << endl;
        Wizard pl;
        pl.get_info();
    }
    else if (player_class == "Warrior")
    {
        cout << "Now you are a Warrior!" << endl;
        Warrior pl;
        pl.get_info();
    }
    else if (player_class == "Assasin")
    {
        cout << "Now you are an Assasin!" << endl;
        Assasin pl;
        pl.get_info();
    }
    else if (player_class == "Archer")
    {
        cout << "Now you are an Archer!" << endl;
        Archer pl;
        pl.get_info();
    }
    else
    {
        cout << "Sorry, but there is no such a class.\nTry typing it with the capital letter and without space after the class name" << endl;
        Character::choose_a_class();
    }
}
