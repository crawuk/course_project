#include <stdio.h>
#include "Shop.h"
#include "Menu.h"
#include <iostream>
using namespace std;

void Shop::wanna_buy_message()
{
    cout << "\nWould you like to buy anything?\n[1]Yes\n[2]No\n";
}

int Shop:: get_returned_defence()
{
    return this->hp_return;
}

int Shop:: get_returned_damage()
{
    return this->damage_return;
}

int Shop:: get_returned_cost()
{
    return this->cost_return;
}

bool Shop::wanna_buy(vector<string> NAMES, vector<int> BOOST_HP, vector<int> BOOST_DAMAGE, vector<int> COST, vector<int> LEVELS, int player_money, int player_level, bool bought_items[3])
{
    int temp;
    cin >> temp;
    if (temp == 1)
    {
        cout << "Enter the number of an item that you want to buy: ";
        cin >> number_of_bought_item;
        if (bought_items[number_of_bought_item - 1] == false)
        {
            if (LEVELS[number_of_bought_item - 1] <= player_level && COST[number_of_bought_item - 1] <= player_money)
            {
                this->hp_return = BOOST_HP[number_of_bought_item - 1];
                this->damage_return = BOOST_DAMAGE[number_of_bought_item - 1];
                this->cost_return = COST[number_of_bought_item - 1];
                this->bought_status[number_of_bought_item - 1] = true;
                cout << "You purchased " << NAMES[number_of_bought_item - 1] << endl;
                return true;
            }
            else if (LEVELS[number_of_bought_item - 1] > player_level && COST[number_of_bought_item - 1] > player_money)
            {
                cout << "Your level is not enough to buy this and you don't have enough money" << endl;
                return false;
            }
            else if (LEVELS[number_of_bought_item - 1] > player_level)
            {
                cout << "Your level is not enough to buy this" << endl;
                return false;
            }
            else if (COST[number_of_bought_item - 1] > player_money)
            {
                cout << "You don't have enough money" << endl;
                return false;
            }
        }
        else
        {
            cout << "You have already purchased this item\n";
            return false;
        }
        return false;
        
    }
    else if (temp == 2)
    {
        return false;
    }
    else
    {
        cout << "there is no such an option\n";
        wanna_buy(NAMES, BOOST_HP, BOOST_DAMAGE, COST, LEVELS, player_money, player_level, bought_items);
        return false;
    }
    return false;
}

void Shop::assort(vector<string> NAMES, vector<int> BOOST_HP, vector<int> BOOST_DAMAGE, vector<int> COST, vector<int> LEVELS)
{
    cout << "======================= Shop =======================\n";
    for (int i = 0; i < NAMES.size(); i++)
    {
        cout << "[" << i + 1 << "]" << NAMES[i] << "\n\tDefence boost : " << BOOST_HP[i] << ", Damage boost : " << BOOST_DAMAGE[i] << ", Cost : " << COST[i]  << ", Reqired level : " << LEVELS[i] << endl;
    }
    cout << "=====================================================";
}
