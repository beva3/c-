#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string word1 = "dbca";
    sort(word1.begin(), word1.end());

    cout << word1 << endl;

    return 0;
}
