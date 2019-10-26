#include <iostream>

using namespace std;

class Student {
public:
	string name;
	string major;
	double gpa;
	Student(string aName, string aMajor, double aGpa) {
		name = aName;
		major = aMajor;
		gpa = aGpa;
	}

	bool hasHonors() {
		if (gpa >= 3.5) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Student std1("Nec", "BME", 3.5);
	Student std2("KK", "JPL", 3.1);

	cout << std1.hasHonors() << endl;
	cout << std2.hasHonors() << endl;
}