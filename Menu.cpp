#include <stdio.h>
#include "Menu.h"
#include "Dungeon.h"
#include "Shop.h"
#include "Wizard_Items.h"
#include "Warrior_Items.h"
#include "Assasin_Items.h"
#include "Archer_Items.h"
#include "Assortment.h"

Menu :: Menu()
{
    dexterity = 0;
    intellegence = 0;
    defence = 0;
    damage = 0;
};

Menu :: Menu(int dex, int intel, int def, int dam, string nam, string player_class)
{
    dexterity = dex;
    intellegence = intel;
    defence = def;
    damage = dam;
    name = nam;
    characher_class = player_class;
}

Menu :: Menu(int a)
{
    this->money = a;
}

Menu:: Menu(int defence, int damage, int cost)
{
    this -> defence = defence;
    this -> damage = damage;
    money = cost;
}


void Menu :: where_to_go()
{
    cout << "=== Menu ===\n[1] Dungeon\n[2] Shop\n[3] Info\n[4] End\n============" << endl;
    cin >> player_input;
    
    switch (player_input)
    {
        case 1:
            Menu::go_to_dungeon();
            break;
        case 2:
            Menu::shop(bought_items);
            break;
        case 3:
            Menu::get_info_about_character();
            break;
        case 4:
            cout << "Thanks for playing!\n";
            Menu::end_game();
            break;

        default:
            cout << "There is no such a command..." << endl;
            Menu::where_to_go();
            break;
    }
}

void Menu::go_to_dungeon()
{
    if (dungeon_level != 22)
    {
        cout << "==== Monster ====";
        Dungeon monst;
        monst.get_monster_characteristics(dungeon_level);
        cout << "[1]Fight\n[2]Back" << endl;
        string player_input;
        cin >> player_input;
        if (player_input == "1")
        {
            if (monst.monster_fight(dungeon_level, damage, dexterity, intellegence, hp, defence, money))
            {
                money += monst.get_won_gold(dungeon_level);
                level += monst.get_won_level(dungeon_level);
                hp = monst.get_left_hp_to_character();
                defence = monst.get_left_defence_to_character();
                dungeon_level++;
                if (dungeon_level == 8 or dungeon_level == 14 or dungeon_level == 17 or dungeon_level == 21)
                {
                    cout << "There is tavern. Do you want to visit it?\n[1]Yes\n[2]No\n";
                    if (monst.tavern(dungeon_level, hp, money, characher_class))
                    {
                        hp = monst.get_left_hp_to_character(100);
                        Menu temporary1(monst.get_vasted_gold());
                        Menu temporary2(this->money);
                        temporary2 = temporary2 - temporary1;
                        this->money = temporary2.money;
                    }
                }
                else
                {
                    cout << "Returning to menu\n";
                }
                Menu::where_to_go();
            }
            else
            {
                cout << "you are dead :c" << endl;
            }
        }
        else if (player_input == "2")
        {
            Menu::where_to_go();
        }
        else
        {
            cout << "There is no such an option..." << endl;
            Menu::go_to_dungeon();
        }
    }
    else
    {
        cout << "The game is completed!\nThanks for playing <3\nзаписать сюда может что нить\n";
        end_game();
    }
    
}


void Menu::get_info_about_character()
{
    cout << "\n==== INFO about your character ====\n|Name: " << this->name << "\n|Class: " << this->characher_class << "\n|Dexterity = " << this -> dexterity << "\n|Intellegence = " << this -> intellegence << "\n|Defence = " << this -> defence << "\n|Damage = " << this -> damage << "\n|Level = " << this ->level << "\n|Money = " << this -> money << "\n|HitPoints = " << this -> hp << "[out of 100]\n===================================" << endl << endl;
    Menu::where_to_go();
}

void Menu::shop(bool bought_items[3])
{
    IShop * shop = nullptr;
    if (characher_class == "Wizard")
    {
        shop = new Wizard_Items();
    }
    else if (characher_class == "Warrior")
    {
        shop = new Warrior_Items();
    }
    else if (characher_class == "Assasin")
    {
        shop = new Assasin_Items();
    }
    else if (characher_class == "Archer")
    {
        shop = new Archer_Items();
    }
    
    if (shop == nullptr) {cout << "there is an error\n";}
    else
    {
        Assortment var;
        if (var.go_shoping(shop, money, level, bought_items))
        {
            Menu purchase(shop->get_returned_defence(), shop->get_returned_damage(), shop->get_returned_cost());
            change_player_stats(purchase);
            this->bought_items[shop->get_number_of_bought_item() - 1] = 1;
        }
        else
        {
            cout << "Returning to menu\n";
        }
    }
    
    Menu::where_to_go();
}

int Menu::end_game()
{
    cout << "Illia Babich, VGTU, Vilnius" << endl;
    return 0;
}

void Menu::change_player_stats(Menu purchase)
{
    Menu player(this->defence, this->damage, this->money);
    player = player + purchase;
    this->defence = player.defence;
    this->damage = player.damage;
    this->money = player.money;
}

void Menu::go_back()
{
    string vvv;
    cin >> vvv;
    if (vvv == "back")
    {
        Menu::where_to_go();
    }
    else
    {
        cout << "something went wrong...";
        Menu::go_back();
    }
}

