#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    // 0 initiation
    string ma_chaine("ma chaine de caractere");
    string mon_nom = "Raphael";

    // 1 concatenation 
    string hello("hello");
    string world("world");
    string hello_world = hello + " " + world;

    // 0
    cout <<ma_chaine <<endl;
    cout << mon_nom << endl;

    // 1 
    cout << hello_world << endl;
    return 0;
}
