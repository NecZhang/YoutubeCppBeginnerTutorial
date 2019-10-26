#include <iostream>


using namespace std;

int main()
{
	int luckyNums[10] = {1, 44, 55, 66, 23};
	cout << luckyNums[0] << endl;
	luckyNums[0] = 7;
	cout << luckyNums[0] << endl;
	cout << luckyNums[7] << endl;
	return 0;
}