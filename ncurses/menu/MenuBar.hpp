#ifndef __MENU_BAR__
#define __MENU_BAR__

#include "myLib.hpp"
#include "Menu.hpp"

class MenuBar{
public: 

    WINDOW* window;
    Menu* menues;
    int numMenuItems;

    MenuBar(WINDOW* window,Menu* menues,int numMenuItems);
    ~MenuBar();
    void drawMenuBar();
};



#endif // !__MENU_BAR__