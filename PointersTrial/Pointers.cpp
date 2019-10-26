#include <iostream>

using namespace std;

int main() {

	int age = 30;
	double gpa = 3.5;
	string name = "Nec";

	cout << "Age: " << &age << endl;
	cout << "Gpa: " << &gpa << endl;
	cout << "Name: " << &name << endl;

	int *pAge = &age;
	double *pGpa = &gpa;
	string *pName = &name;

	cout << *pAge << endl;
	cout << pAge << endl;

	return 0;
}