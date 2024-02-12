#include <iostream>
#include <string>
using namespace std;


int main(){

    string s1 = "aaphael";
    string s2 = "raphael";

    cout << s1 + s2 << endl;
    if(s1 > s2)
        cout << s1 << " est sup "<< endl;
    else 
        cout << s2 << " est sup "<< endl;

    return 0;
}