#include <iostream>
#include <string>
using namespace std;

class Personne{
    public :
        string nom;
        int age;
        void se_presenter();
};

void Personne::se_presenter(){
    cout<<"je m'appel : " << nom<<endl;
    cout<<"j'ai "<< age << "ans" << endl;
}

int main(int argc, char const *argv[])
{
    Personne P1;
    P1.nom = "Ransrianantoanina Bienvenu Raphael";
    P1.age = 21;
    P1.se_presenter();
    return 0;
}
