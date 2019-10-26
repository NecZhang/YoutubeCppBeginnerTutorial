#include <iostream>

using namespace std;

double cube(double num);

int main()
{
	cout << cube(2.1) << endl;
	return 0;
}

double cube(double num)
{
	double result = num * num * num;
	return result;

	/*same as "return num * num * num;"*/
}