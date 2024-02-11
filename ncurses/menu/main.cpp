#include "myLib.hpp"

int main(int argc, char const *argv[])
{
    initscr();
    nocbreak();
    noecho();
    curs_set(0);//diseable cursor

    int yMax = 0,xMax = 0;
    getmaxyx(stdscr, yMax, xMax);
    WINDOW* window = newwin(yMax/2, xMax/2, yMax/8,xMax/4);
    box(window, 0,0);


    wgetch(window);
    endwin();
    return 0;
}
