#include <iostream>
#include "Solve.h"

using namespace std;

int main()
{
    Solve *solve = new Solve();

    cout << solve->newton(3) << endl;
    return 0;
}
