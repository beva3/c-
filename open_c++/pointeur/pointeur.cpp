#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int *p = &a;
    cout << &a << "|" << p << endl;
    cout << a << "|" << *p << endl;
    return 0;
}
