#include <iostream>
#include <string>

using namespace std;

void compare_chaine(string ch1, string ch2){
    if (ch1 != ch2){
        cout<<"les deux chaines sont differents"<<endl;
    }
    else
        cout<< "les deux chaines sont identique"<< endl;
}

int main(int argc, char const *argv[])
{
    string ch1("raphael");
    string ch2("Raphael");
    compare_chaine(ch1,ch2);
    compare_chaine(ch1,ch1);
    compare_chaine(ch2,ch2);

    return 0;
}
