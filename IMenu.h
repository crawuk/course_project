#ifndef IMenu_h
#define IMenu_h

class IMenu
{
public:
    
    IMenu() {}
    virtual void where_to_go() = 0;
    virtual void go_back() = 0;
    virtual void go_to_dungeon() = 0;
    virtual void get_info_about_character() = 0;
    virtual void shop(bool bought_items[3]) = 0;
    virtual int end_game() = 0;
    
};

#endif /* IMenu_h */
