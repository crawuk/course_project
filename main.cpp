#include <iostream>
#include <string>
#include <cmath>
#include "Menu.h"
#include "Dungeon.h"
#include "Shop.h"
#include "Classes_Base.hpp"
#include "Assasin.h"
#include "Archer.h"
#include "Wizard.h"
#include "Warrior.h"
#include "Player.h"

using namespace std;

vector<int> player_stats;
vector<string> player_class_and_name;

void vector_fill(Classes_Base * temp)
{
    player_stats.push_back(temp->get_dex());
    player_stats.push_back(temp->get_damage());
    player_stats.push_back(temp->get_defence());
    player_stats.push_back(temp->get_intellegence());
    player_class_and_name.push_back(temp->get_class());
    player_class_and_name.push_back(temp->get_name());
}

Player choose_a_class(string player_class, string name)
{    
    if (player_class == "Wizard" or player_class == "1" or player_class == "wizard")
    {
        Wizard var1;
        Player play;
        play.character_creation(&var1, name, "Wizard");
        vector_fill(&var1);
        return play;
        
    }
    else if (player_class == "Warrior" or player_class == "2" or player_class == "warrior")
    {
        
        Warrior var2;
        Player play;
        play.character_creation(&var2, name, "Warrior");
        vector_fill(&var2);
        return play;
    }
    else if (player_class == "Assasin" or player_class == "3" or player_class == "assasin")
    {
        Assasin var3;
        Player play;
        play.character_creation(&var3, name, "Assasin");
        vector_fill(&var3);
        return play;
    }
    else if (player_class == "Archer" or player_class == "4" or player_class == "archer")
    {
        Archer var4;
        Player play;
        play.character_creation(&var4, name, "Archer");
        vector_fill(&var4);
        return play;
    }
    else
    {
        std::cout << "\nSorry, but there is no such a class.\nTry typing it with the capital letter and without space after the class name\n" << std::endl;
        choose_a_class(player_class, name);
        Player temp;
        return temp;
    }
}


int main(int argc, const char * argv[])
{
    cout << "Hello and welcome to mini-game!\nYour goal is to beat each and every boss in dungeons\nGood luck <3\n";
    string player_class, name;
    std::cout << "Let's begin with your name!\nYour name is ... ";
    cin >> name;
    cout << "Now it's time to choose your class\nThere are 4 classes:\n\n\t[1]Wizard\n\t\tdexterity = 6, intelligence = 18, defence = 7, damage = 8\n\n\t[2]Warrior\n\t\tdexterity = 5, intelligence = 3, defence = 20, damage = 12\n\n\t[3]Assasin\n\t\tdexterity = 17, intelligence = 5, defence = 5, damage = 12 \n\n\t[4]Archer\n\t\tdexterity = 10, intelligence = 7, defence = 12, damage = 11\n\nType the name of the class that appeals to you ... ";
    cin >> player_class;
    choose_a_class(player_class, name);
    Menu temp(player_stats[0], player_stats[3], player_stats[2], player_stats[1], player_class_and_name[1], player_class_and_name[0]);
    temp.where_to_go();
    
    
    player_stats.clear();
    player_class_and_name.clear();
    return 0;
}
