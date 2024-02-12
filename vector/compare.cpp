#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
string minV(vector <string> list){
    string min = list[0];

    for(int i = 0 ; i < list.size() ; i++){
        if(list[i] < min)
            min = list[i];
    }

    return min;
}


int main(){

    string s1 = "aaphael";
    string s2 = "raphael";
    vector <string> names = {
        "abel",
        "beli",
        "ced",
        "aaa"
    };

    cout <<minV(names) << endl;

    /* cout << s1 + s2 << endl;
    if(s1 > s2)
        cout << s1 << " est sup "<< endl;
    else 
        cout << s2 << " est sup "<< endl;
 */
    return 0;
}