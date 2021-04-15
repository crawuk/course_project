#include <stdio.h>
#include "Character_creation.h"
#include "Menu.h"
using namespace std;

void Character::get_name_from_user()
{
    cout << "Let's begin with your name!\nYour name is ... ";
    cin >> name;
}

void Character::choose_a_class()
{
    cout << "Now it's time to choose your class\nThere are 4 classes:\n\n\tWizard\n\t\tdexterity = 5, intellegence = 15, defence = 5, damage = 10\n\n\tWarrior\n\t\tdexterity = 10, intellegence = 0, defence = 15, damage = 10\n\n\tAssasin\n\t\tdexterity = 15, intellegence = 5, defence = 5, damage = 10 \n\n\tArcher\n\t\tdexterity = 5, intellegence = 5, defence = 15, damage = 10\n\nType the name of the class that appeals to you ... ";
    
    cin >> player_class;
    
    if (player_class == "Wizard")
    {
        cout << "Now you are a Wizard!" << endl;
        Menu pl (5, 15, 5, 10, name, player_class);
        pl.get_info_about_character();
    }
    else if (player_class == "Warrior")
    {
        cout << "Now you are a Warrior!" << endl;
        Menu pl (10, 0, 15, 10, name, player_class);
    }
    else if (player_class == "Assasin")
    {
        cout << "Now you are an Assasin!" << endl;
        Menu pl (15, 5, 5, 10, name, player_class);
    }
    else if (player_class == "Archer")
    {
        cout << "Now you are an Archer!" << endl;
        Menu pl (5, 5, 15, 10, name, player_class);
    }
    else
    {
        cout << "\nSorry, but there is no such a class.\nTry typing it with the capital letter and without space after the class name\n" << endl;
        Character::choose_a_class();
    }
}
