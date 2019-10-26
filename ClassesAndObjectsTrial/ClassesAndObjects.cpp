#include <iostream>

using namespace std;

class Book {
public:
	string title;
	string author;
	int pages;
};

int main() {

	Book book1;
	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 711;

	cout << book1.author;

	return 0;
}