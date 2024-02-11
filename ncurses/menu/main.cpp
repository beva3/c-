#include "myLib.hpp"
#include "Menu.hpp"
#include "MenuBar.hpp"

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
    MenuBar menuBar(window,menues,3);

/*     
    mvwprintw(window,2,2,"%d",menues[0].startX);
    mvwprintw(window,3,2,"%d",menues[1].startX);
    mvwprintw(window,4,2,"%d",menues[2].startX);
 */

    wgetch(window);
    endwin();
    return 0;
}
