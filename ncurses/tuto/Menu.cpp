#include "Menu.hpp"

Menu::Menu(string text,char trigger){
    this->text = text;
    this->trigger = trigger;
}
Menu::~Menu(){
    cout << "Destroy Menu" << endl;
}