#ifndef __MENU_H__
#define __MENU_H__

#include "myLib.hpp"

class Menu{
public:
    
    string textMenu;
    char trigger;
    int startX;

    Menu(string textMenu,char trigger);
    ~Menu();
};


#endif // !__MENU_H__
