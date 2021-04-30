#include <stdio.h>
#include "Player.h"

Player::Player() {}

Player ::Player (string class_name, int dex, int intelligence, int defence, int damage)
{
    this->player_class = class_name;
    this->dex = dex;
    this->intelligence = intelligence;
    this->defence = defence;
    this->damage = damage;
}

void Player:: stats(string player_class, string name) {}
std::string Player:: get_class_story()
{
    return "";
}

void Player:: character_creation(Classes_Base *player, std::string name, string player_class)
{
    player->stats(player_class, name);
    cout << "Story of the character: " << player->get_class_story() << endl;
}
