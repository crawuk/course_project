#include <stdio.h>
#include "Assasin.h"

void Assasin:: stats(string player_class, string name)
{
    this->player_class = player_class;
    this->name = name;
    dex = 17;
    intelligence = 5;
    defence = 5;
    damage = 12;
}

std::string Assasin:: get_class_story()
{
    return "Professional killer, thief and scout. Her glory runs ahead of her, although few beings have seen her in theirs's own person. However, nothing lasts forever... At the last mission, something unforeseen occurred in Gorondor, Assassin was captured to the occult merchant who did not leave her choice except the deal. He promised the freedom and anonymity to Assassin instead of the mysterious and legendary artifact - the 'Book of everything'. The deal seems extremely profitable - impunity and anonymity for some kind of miserable book? However, who knows whether it will not turn into the failure for our hero. Fight!";
}
