#include <iostream>

using namespace std;

int getMax(int num1, int num2){
	int result;

	if (num1 > num2){
		result = num1;
	}
	else if (num1 == num2){
		result = num1;
	}
	else{
		result = num2;
	}

	return result;
}
int main(){
	int num1 = 11;
	int num2 = 11;

	cout << getMax(num1, num2);

	return 0;
}