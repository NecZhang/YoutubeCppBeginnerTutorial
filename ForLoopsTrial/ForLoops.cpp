#include <iostream>

using namespace std;

int main () {

	int num[] = {1, 3, 5, 7, 9, 11};
	for (int i = 1; i < 7; i++) {
		cout << num[i - 1] << endl;
	}

	return 0;
}