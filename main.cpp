#include <iostream>
#include <string>
#include <cmath>
#include "Character_creation.h"
#include "Start_game.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Character player;
    player.get_intro_msg();
    player.get_name_from_user();
    player.choose_a_class();
    
    
    return 0;
}
