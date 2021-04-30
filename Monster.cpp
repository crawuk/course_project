#include <stdio.h>
#include "Monster.h"
#include <iostream>
#include <thread>

Monster :: Monster() {};

Monster :: Monster (string n, string s, int l, int h, int dam, int def, int g)
{
    name = n;
    story = s;
    lvl = l;
    health = h;
    damage = dam;
    defence = def;
    gold = g;
}

Monster :: Monster(int temp)
{
    this->character_defence = temp;
}

void Monster :: get_monster_characteristics(int temp)
{
    cout << "\n|Name: " << name_array[temp] << "\n|Story: " << story_array[temp] << "\n|Level: " << level_array[temp] << "\n|Health: " << health_array[temp] << "\n|Damage: " << damage_array[temp] << "\n|Defence: "<< defence_array[temp] << "\n|Gold: " << gold_array[temp] << "\n=================" << endl;
}

bool Monster :: is_monster_defeated(int temp, int character_damage, int character_dexterity, int character_intellegence, int character_health, int character_defence, int character_money)
{
    bool monster_alive = true, character_alive = true;
    int monster_defence = defence_array[temp];
    int monster_health = health_array[temp];
    while (monster_alive and character_alive)
    {
        if (character_defence + character_health - damage_array[temp] <= 0)
        {
            std::this_thread::sleep_for (std::chrono::seconds(1));
            cout << name_array[temp] << " deals "  << damage_array[temp] << " damage";
            cout << ", you have " << 0 << " hp left + " << 0 << " armor" << endl;
            std::this_thread::sleep_for (std::chrono::seconds(1));
            character_alive = false;
            return false;
        }
        else
        {
            cout << name_array[temp] << " deals "  << damage_array[temp] << " damage";
        }
        
        if (character_defence > 0)
        {
            character_defence -= damage_array[temp];
            if (character_defence < 0)
            {
                int var = -character_defence;
                character_defence += var;
                character_health -= var;
                if (character_health <= 0)
                {
                    character_alive = false;
                    return false;
                }
                character_hp = character_health;
            }
            else if (character_defence > 0)
            {
                this->character_defence = character_defence;
                character_hp = character_health;
            }
        }
        else
        {
            character_hp = character_health -= damage_array[temp];
        }
        
        this->character_defence = character_defence;
        
        cout << ", you have " << character_health << " hp left + " << character_defence << " armor" << endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
        cout << "You deal " << character_damage + character_dexterity + character_intellegence << " damage";
        
        if (monster_defence > 0)
        {
            monster_defence -= character_damage + character_dexterity + character_intellegence;
            if (monster_defence <= 0)
            {
                int var = -monster_defence;
                monster_defence += var;
                monster_health -= var;
                if (monster_health <= 0)
                {
                    cout << ", monster has " << 0 << " hp left + " << 0 << " armor\n";
                    cout << "=================\n|" << name_array[temp] << " defeated!\n=================" << endl;
                    std::this_thread::sleep_for (std::chrono::seconds(2));
                    monster_alive = false;
                    return true;
                }
            }
        }
        else
        {
            monster_health -= character_damage + character_dexterity + character_intellegence;
            if (monster_health <= 0)
            {
                cout << ", monster has " << 0 << " hp left + " << 0 << " armor\n";
                cout << "=================\n|" << name_array[temp] << " defeated!\n=================" << endl;
                std::this_thread::sleep_for (std::chrono::seconds(2));
                monster_alive = false;
                return true;
            }
        }
        
        cout << ", monster has " << monster_health << " hp left + " << monster_defence << " armor" << endl;
        std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    return true;
}

bool Monster::tavern(int dungeon_level, int character_health, int character_money, string character_class)
{
    int player_input;
    cin >> player_input;
    if (player_input == 1)
    {
        cout << "you have " << character_health << " hp and " << character_money << " gold\n";
        cout << "You can buy ";
        if (character_class == "Wizard")
        {
            cout << "Potion of life ";
        }
        else if (character_class == "Warrior")
        {
            cout << "Strong swipes ";
        }
        else if (character_class == "Assasin")
        {
            cout << "Therapeutic tincture ";
        }
        else if (character_class == "Archer")
        {
            cout << "Regenerating decoction ";
        }
        cout << "that will completely heal you. It costs 100 gold. Are you interested?\n[1]Yes\n[2]No\n";
        int decision;
        cin >> decision;
        if (decision == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "Sip... ";
                std::this_thread::sleep_for (std::chrono::seconds(1));
            }
            cout << endl;
            return true;
        }
        else if (decision == 2)
        {
            return false;
        }
        else
        {
            cout << "there is no such an option...";
            tavern(dungeon_level, character_health, character_money, character_class);
            return false;
        }
    }
    else if (player_input == 2)
    {
        return false;
    }
    else
    {
        cout << "There is no such an option...";
        tavern(dungeon_level, character_health, character_money, character_class);
        return false;
    }
}

int Monster :: get_won_gold(int temp)
{
    return gold_array[temp];
}

int Monster :: get_won_level(int temp)
{
    return level_array[temp];
}

int Monster :: get_damage_to_character(int temp)
{
    return damage_array[temp];
}

int Monster :: get_left_hp_to_character()
{
    return character_hp;
}

int Monster :: get_left_hp_to_character(int a)
{
    return a;
}

int Monster:: get_vasted_gold()
{
    return 100;
}

int Monster:: get_left_defence_to_character()
{
    return character_defence;
}
