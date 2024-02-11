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

/*
    recuper the startX
*/

    for(int i = 0 ; i < numMenuItems ; i++){
        this->menues[i].startX = curentPosition;
        curentPosition += this->menues[i].textMenu.length() + 2;
    }

}

MenuBar::~MenuBar(){}

void MenuBar::drawMenuBar(){
    int startX = 0;
    string textMenu = "";

/*
    affiche the mentuBar , il faut de position startX
*/

    for(int i = 0 ; i < numMenuItems ; i++ ){
        startX = this->menues[i].startX;
        textMenu = this->menues[i].textMenu;

        mvwprintw(window, 0, startX, "%s", textMenu.c_str());

    }

}