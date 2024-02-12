#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
 	vector<int> vec = {5, 2, 4, 1, 3};	
	sort(vec.begin(), vec.end());

  	for (int i : vec) {
		cout << i << " ";
  	}

  	cout <<endl;

  	return 0;
}
