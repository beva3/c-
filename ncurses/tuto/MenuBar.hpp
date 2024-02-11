#ifndef __MENU_BAR__
#define __MENU_BAR__

#include "myLib.hpp"
#include "Menu.hpp"

class MenuBar{
public:
    WINDOW* window;
    int numMenus;
    Menu *menus;
    int selectMenu ;

    MenuBar(WINDOW* window,Menu* menus,int numMenus);
    ~MenuBar();
    void draw();
    void handleTrigger(char trigger);

};


#endif // !__MENU_BAR__