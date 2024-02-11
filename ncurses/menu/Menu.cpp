#include "Menu.hpp"
/*
    Menu("Option",'O');
 */
Menu::Menu(string textMenu, char trigger){
    this->textMenu = textMenu;
    this->trigger = trigger;
}
Menu::~Menu(){}