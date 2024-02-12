#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct vMin_pos{
    string ValuMin;
    int pos;
}vMin_pos;

class V{
    private:
        string minV(vector <string> list){
            string min = "";

            for(auto str : list){
                if(min > str)
                    min = str;
            }

            return min;
        }
    public:
        V(){}
        ~V(){};
        void misonga(){
            vector <string> finale;
        }
        vector <string> liste;

};

vMin_pos valuPos(vector <string> list,int start){
    vMin_pos v_p = {list[start],start};

    for(int i = start ; i < list.size() ; i++){
        if(list[i] < v_p.ValuMin){
            v_p.ValuMin = list[i];
            v_p.pos = i;
        }
    }

    return v_p;
}

void echo(vector<string> list){
    for(int i = 0 ; i < list.size() ; i++){
        cout << list[i] << endl;
    }
    cout << " " << endl;
}

vector <string> triiListe(vector <string> listes){
    string tmp ;
    for(int i = 0 ; i< listes.size() ; i++){
        tmp = listes[i] ;
        listes[i] = valuPos(listes,i).ValuMin;
        listes[valuPos(listes,i).pos] = tmp;
    } 
    return listes;
}

int main(){

    string s1 = "aaphael";
    string s2 = "raphael";
    vector <string> names = {
        "adala",
        "beloha",
        "all",
        "dada",
        "eliane"
    };
/*
    echo(names);
    for(int i = 0 ; i < names.size(); i++)
    cout << i << valuPos(names,i).ValuMin << "|" << valuPos(names, i).pos<< endl;

    echo(triiListe(names));
*/  
    sort(names.begin(),names.end());
    echo(names);
    return 0;
}