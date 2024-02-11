#include "MenuBar.hpp"

MenuBar::MenuBar(WINDOW* window,Menu* menus, int numMenus){
    
    int curentPos = 2; // init menu position
    this->selectMenu = -1;

    cout << "Creat MenuBar" << endl;
    this->window = window;
    this->menus = menus;
    this->numMenus = numMenus;

    for(int i = 0 ; i < numMenus ; i++){
        this->menus[i].start_x = curentPos; // [** Draw]
        curentPos += this->menus[i].text.length() + 1; // espace 1 caracter
    }

}

MenuBar::~MenuBar(){
    cout << "Destroy MenuBar" << endl;    
}

void MenuBar::draw(){
    int startX = 0;
    string text  = "";
    for(int i = 0 ; i < numMenus ; i++){
        startX = this->menus[i].start_x; // [** Draw]
        text = this->menus[i].text;
        if(selectMenu == i)
            wattron(window,A_STANDOUT);
        //else selectMenu = -1;
        mvwprintw(window, 0, startX, "%s",text.c_str()); // [head text] 
        wattroff(window,A_STANDOUT);
    }
}

void MenuBar::handleTrigger(char trigger){
    for(int i = 0 ; i < numMenus; i++)
        if(trigger == this->menus[i].trigger)
            selectMenu = i;
}