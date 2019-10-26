#include <iostream>

using namespace std;

void sayHi(string name, int age);


int main()
{
	sayHi("KK", 27);
	return 0;
}

void sayHi(string name, int age)
{
	cout << "Hello " << name << "!" << endl;
	cout << "You are " << age << ".";
}