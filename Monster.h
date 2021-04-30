#ifndef Monster_h
#define Monster_h
#include "Menu.h"
#include <string>
using namespace std;

class Monster : public Menu
{
protected:
    
    string name, story;
    int lvl, health, damage, defence, gold, character_hp, character_defence;
    string name_array[22] = {"Gang of rogues", "Shushpin", "Insane breeder", "King Volnomut", "Mechanical crows", "Babbler", "Tokkie", "Mechanical lock chest", "A crowd of harpies", "Starving dragon", "Ghoul", "Griffon", "Hydra","Baron Rivendare", "Babaduk", "Nameless warrior", "Berserk of white sword", "Gate keeper", "Khadgar", "Medivh", "Krabster", "Tik-Tok"};
    string story_array[22] = {"A small gang of rogues is the first obstacle on your way (or maybe just a warm-up?).", "A hermit pirate dependent on three things: whiskey, gold and women.", "The main 'bad boy' of the local village. Raises the most vicious creatures that do not look like dogs! Many call him a madman, but for him these 'puppies' are just a hobby.", "The big boss of this port. Nobody saw him live, not surprising, because he hates people. But people are not attracted to him either. You ask why? Because nobody likes those damn murlocs!! Mrgl-mrgl-mrgla...", "Strange creatures of metal and springs. We must quickly deal with them, because their wings can easily chop you!", "A robust robot with multiple manipulators. It is assembled from the remains of various bots, it is easy to understand from its strange multi-colored body.", "The famous inventor in the local area, at least she was - now in the city there is no one but rusty robots and mechanical crows. In her arsenal there are many 'tricks' and huge robots. Can you defeat the genius of robotics?", "A strange chest with a huge padlock. The fact that it belonged to Tokkie is even more curious. 'What is in it?..'", "They may not shine with intelligence and strength, but in quantity they are capable of killing opponents much more stronger than them. And where do they come from here?", "The hungry beast is the most dangerous beast. Nearby are mountains of bones, now it is clear what those harpies ate. Only one thing is visible in the eyes of this dragon - hungry rage.", "Baron Rivendare, he is only legendary. It is said that after learning the mastery of dark magic, he turned all the inhabitants of these lands into mindless slaves. The infamous 'lord of the scourge' runs ahead of him, despite this, he is one of the most powerful dark magicians known. Apparently this is one of the escaped ghouls, he does not pose a danger, but leaving him alive would be a mistake.", "A magnificent blend of a noble eagle and a majestic lion. However, all this beauty evaporates from the head when you realize that you are just food for it!", "The character of many horror stories. A huge creature with three heads, scales and the body of a beast. Its mouth is filled with thousands of razor-sharp teeth. Her paws are shackled and a chain is nailed to a granite column, it does not look like she was here on her own...", "Here he is, the lord of the dark nagic. Apparently the legends about the strength and power of his magic are true, since he was able to tame such a monster as a Hydra. The whole body is saturated with the power of dark runes, his faithful horse tramples the petrified earth with metal hooves, and the whip constantly urges ugly ghouls on. Rivendare builds his kingdom in the uninhabitable lands once considered the richest part of Gorondor. Getting through him and his minions will be more luck than skill.", "Not a single mind that reached these wastelands could not stand it: 'Babadook, dook, dook, dook ...'.", "A warrior with no name or honor. He wanders the wastelands in order to find the enemy and shed blood. He is attracted only by the battles and the number of people killed by his blade. He lives for one thing - to die in battle.", "His name is steeped in legends and misunderstandings. Some believe that his name is due to the huge titanium blade the size of two people, while others believe that it is because of the number of souls that he took away with the help of it. But one thing is clear - his sword will not miss the opportunity to gut another victim. Horror ...", "Endless lands strewn with white stone. The landscape could have been fascinating if not for the huge gate. These gates are the only way to pass through the stone walls, hiding something frightening, unknown, mysterious behind them - answers to all the questions that a person can ask himself. The gate is guarded by a plasma-armored golem. Your presence did not almost embarrass him, on the contrary, his composure only alarms.", "Disciple of the greatest magician Medivh. He knows many secrets of using ordinary magic, which in his hands becomes the best medicine or the sharpest sword. His power is even difficult to imagine, but now you will have to experience it for yourself.", "Here they are, the chambers of Medivh himself! Once upon a time, this magician knew the rarest and best healing techniques. However, it was not enough for him to simply heal people, and he decided to curb the other side of the power of magic. Thus, now Medivh is the most powerful and powerful magician known to people. His thirst for power has crossed all boundaries and now he, with his student Khadgar, guards the most majestic artifact known to the world - 'The book of everything'!", "A huge substance of flesh, fangs, tentacles and armor guards the entrance to the Boss's cave. You ask: 'so why is it dangerous?'. His main weapon is huge pincers that can bite through even the most durable armor.", "Enslaver of the worlds. On account of Tik Tok there are already hundreds of millions of people around the world, each of which enhances and saturates it. Keeps 'The book of everything', but can you get it without becoming one of his captives?"};
    int level_array  [22] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int health_array [22] = {9, 18, 26, 39, 8, 20, 25, 1, 15, 28, 4, 19, 38, 15, 30, 30, 82, 50, 30, 38, 85, 1000};
    int damage_array [22] = {1, 3, 4, 11, 3, 9, 16, 0, 4, 7, 1, 13, 15, 26, 12, 13, 19, 16, 18, 2, 3, 1};
    int defence_array[22] = {0, 2, 5, 1, 8, 38, 6, 0, 2, 11, 0, 4, 7, 14, 2, 27, 4, 29, 6, 7, 150, 0};
    int gold_array   [22] = {50, 50, 100, 100, 100, 100, 100, 200, 200, 200, 200, 200, 200, 300, 300, 300, 400, 400, 400, 500, 500, 500};
    
public:
    
    Monster();
    Monster(int temp);
    Monster (string n, string s, int l, int h, int dam, int def, int g);
    void get_monster_characteristics(int temp);
    bool is_monster_defeated(int temp, int character_damage, int character_dexterity, int character_intellegence, int character_health, int character_defence, int character_money);
    int get_won_gold(int temp);
    int get_won_level(int temp);
    int get_damage_to_character(int temp);
    int get_left_defence_to_character();
    int get_left_hp_to_character();
    int get_left_hp_to_character(int a);
    int get_vasted_gold();
    bool monster_fight(int q, int w, int e, int r, int t, int y);
    bool tavern(int dungeon_level, int character_health, int character_money, string character_class);
    friend Monster operator + (Monster &v1, int v2)
    {
        return Monster(v1.character_defence + v2);
    }
    
};



#endif /* Monster_h */
