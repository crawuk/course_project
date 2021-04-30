#include <stdio.h>
#include "Warrior.h"

void Warrior:: stats(string player_class, string name)
{
    this->player_class = player_class;
    this->name = name;
    dex = 5;
    intelligence = 3;
    defence = 20;
    damage = 12;
}

std::string Warrior:: get_class_story()
{
    return "Warrior does not know mercy and pity. From his sword died more lives than from all fires and floods combined together. He became the greatest berserk, all Gorondor is afraid of him. Gold, lands, power - all the desired he achieved, but there is one thing that he could not get in the battles - feeling alive. He does not remember when was the last time released the sword out of his hands, all his life he only destroyed, but never created, he did not love. He did not live in ordinary human life. At this journey he will go in order to receive the 'Book of everything' - the legendary artifact containing answers to all the questions hidden in the darker parts of the Gorondor, hoping to obtain a feeling that is once lost - a sense of life.";
}
