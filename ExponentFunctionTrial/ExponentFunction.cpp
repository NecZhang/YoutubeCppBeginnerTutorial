#include <iostream>

using namespace std;

int power(int baseNum, int powNum) {
	int result = 1;

	for (int i = 0; i < powNum; i++) {
		result = baseNum * result;
	}

	return result;
}

int main() {
	
	int inputBNum;
	int inputPNum;
	cout << "Enter a base number: ";
	cin >> inputBNum;
	cout << "Enter a power number: ";
	cin >> inputPNum;
	cout << power(inputBNum, inputPNum);

	return 0;
}