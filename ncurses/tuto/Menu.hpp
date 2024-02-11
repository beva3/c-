#ifndef __MENU_H__
#define __MENU_H__

#include "myLib.hpp"

class Menu{

public:
    Menu(string text, char trigger);
    ~Menu();
    string text;
    char trigger;
    int start_x;
};

#endif // !__MENU_H__