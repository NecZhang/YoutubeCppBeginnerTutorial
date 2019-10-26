#include <iostream>

using namespace std;

int main(){
	int index = 2;
	while (index <= 7){
		cout << index << endl;
		index++;
	}

	do{
		cout << index << endl;
		index--;
	} while (index >= 1);

	return 0;
}