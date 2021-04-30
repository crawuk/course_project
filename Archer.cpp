#include <stdio.h>
#include "Archer.h"

void Archer:: stats(string player_class, string name)
{
    this->player_class = player_class;
    this->name = name;
    dex = 10;
    intelligence = 7;
    defence = 12;
    damage = 11;
}
std::string Archer:: get_class_story()
{
    return "Family man or just a good guy. He spent his whole life helping his family. His village is hidden in the thicket of the Gorondorsian forests and never knew grief and ruin. Only occasionally small gangs of thieves try to scrounge something from this village but an archer is a fantastic success in hunting and does not leave them any chances. Nothing foreshadowed troubles but 'the most secure fortress can be destroyed only from the inside'. An unknown disease infected all villagers. Every day archer's relatives and friends died from it. The chief sage of the village found the solution of all the problems of the village - the 'Book of everything'. It should help cure residents and give new forces on the restoration of the village. However, there was a problem - local physicians will be able to cure only one brave who decided to go to such a dangerous adventure. This huge responsibility fell on the shoulders of Archer, more precisely he volunteered to go on the road himself, so he would do everything to help his village. Easy way to you, traveler!";
}
