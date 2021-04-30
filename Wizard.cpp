#include <stdio.h>
#include "Wizard.h"

void Wizard:: stats(string player_class, string name)
{
    this->player_class = player_class;
    this->name = name;
    dex = 6;
    intelligence = 18;
    defence = 7;
    damage = 8;
}

std::string Wizard:: get_class_story()
{
    return "A disciple of the greatest magicians of the Gorondor. Queen of the local land. She is famous for her hospitality, generosity and beauty. In her life there are no black stripes or misfortunes, with the exception of one - the disappearance of the Father. The magician does not remember him, but she knows about his existence. All her patrons tried to hide this loss from the magician, but the curiosity of the young mage destroyed their plans. Many years have passed and in one of the books, the magician found out about the 'Book of everything' - it is able to give his owner an answer to any question. Now she stands on the threshold of her kingdom. The complete determination and desire to find out everything about her father and maybe even return him.";
}
