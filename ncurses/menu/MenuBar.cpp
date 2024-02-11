#include "MenuBar.hpp"

/*     < start1
    ---Menu1---Menu2---
    |          < start2 |
    |                   |
    |                   |
     -------------------
*/

MenuBar::MenuBar(WINDOW* window, Menu* menues,int numMenuItems){

    int curentPosition = 3;

    this->window = window;
    this->menues = menues;
    this->numMenuItems = numMenuItems;

    for(int i = 0 ; i < numMenuItems ; i++){
        this->menues[i].startX = curentPosition;
        curentPosition += this->menues[i].textMenu.length() + 2;
    }

}

MenuBar::~MenuBar(){}