#include <iostream>

using namespace std;

int main() {

	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 5;
	bool outOfGuess = false;

	do {
		if (guessCount < guessLimit) {
			cout << "Enter guess number: ";
			cin >> guess;
			guessCount++;
		}
		else {
			outOfGuess = true;
		}

	} while (secretNum != guess && !outOfGuess);

	if (outOfGuess) {
		cout << "You lose!" << endl;
	}
	else {
		cout << "You win!" << endl;
	}
	

	return 0;
}