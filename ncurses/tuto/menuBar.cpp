#include "myLib.hpp"
#include "Menu.hpp"
#include "MenuBar.hpp"


int main(int argc, char const *argv[])
{
    initscr();
    noecho();
    curs_set(0);

    int yMax,xMax;
    char choice;
    getmaxyx(stdscr,yMax,xMax);
    WINDOW *window = newwin(yMax/2,xMax/2,yMax/4,xMax/4);
    box(window,0,0);
    
    Menu menus[5]={
        Menu("File",'f'),
        Menu("Edit",'e'),
        Menu("Options",'o'),
        Menu("Help",'h'),
        Menu("About",'a')
    };
    MenuBar menuBar = MenuBar(window,menus,5); 
    // MenuBar : Menu initializasion
    menuBar.draw();

/* 
    // MenuBar : Menu initializasion
    mvwprintw(window, 0,2,"File");
    mvwprintw(window, 0,7,"Edit");
    mvwprintw(window, 0,13,"Option");
 */

    while((choice =  wgetch(window))){

/* 
        // MenuBar : check  user input for trigger 
        switch(choice){
            case 'f':
            //MenuBar : select menu_x
                wattron(window,A_STANDOUT);                
                mvwprintw(window, 0,2,"File");
                wattroff(window,A_STANDOUT);
                mvwprintw(window, 0,7,"Edit");
                mvwprintw(window, 0,13,"Option");
                break;
            case 'e':
            //MenuBar : select menu_x
                wattron(window,A_STANDOUT);                
                mvwprintw(window, 0,7,"Edit");
                wattroff(window,A_STANDOUT);
                mvwprintw(window, 0,2,"File");
                mvwprintw(window, 0,13,"Option");
                break;
            case 'o':
            //MenuBar : select menu_x
                wattron(window,A_STANDOUT);                
                mvwprintw(window, 0,13,"Option");
                wattroff(window,A_STANDOUT);
                mvwprintw(window, 0,2,"File");
                mvwprintw(window, 0,7,"Edit");
                break;
            default :
                //MenuBuar : reset all
                wattroff(window,A_STANDOUT);
                mvwprintw(window, 0,2,"File");
                mvwprintw(window, 0,7,"Edit");
                mvwprintw(window, 0,13,"Option");
                break;
        }
*/
        menuBar.handleTrigger(choice);
        menuBar.draw();
    }

    endwin();
    return 0;
}
