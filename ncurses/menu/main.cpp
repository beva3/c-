#include "myLib.hpp"
#include "Menu.hpp"

int main(int argc, char const *argv[]){
    initscr();
    nocbreak();
    noecho();
    curs_set(0);//diseable cursor

    int yMax = 0,xMax = 0;
    Menu menues[3] = {
        Menu("Menu1",'1'),
        Menu("Menu2",'2'),
        Menu("Menu3",'3')
    };

    getmaxyx(stdscr, yMax, xMax);
    WINDOW* window = newwin(yMax/2, xMax/2, yMax/8,xMax/4);
    box(window, 0,0);

    //mvwprintw(window, 0,1,"%s",menues[0].textMenu.c_str());


    wgetch(window);
    endwin();
    return 0;
}
