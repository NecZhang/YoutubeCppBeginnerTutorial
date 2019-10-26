#include <iostream>

using namespace std;

int main()
{
	cout << "Nec\n";
	cout << "Hello!" << endl;
	string name = "KK and Nec";
	cout << name.length() << endl;
	cout << name[3] << endl;
	name[3] = 'A';
	cout << name[3] << endl;
	cout << name.find("Nec", 8) << endl;
	cout << name.find("Z", 0) << endl;
	cout << name.substr(7, 3) << endl;
	return 0;
}