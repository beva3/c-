#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string word1  = "dbca";
    string word2  = "dbca";
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end(),greater<int>());

    cout << word1 << endl;
    cout << word2 << endl;

    return 0;
}
