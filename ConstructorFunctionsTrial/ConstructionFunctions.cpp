#include <iostream>

using namespace std;

class Book {
public:
	string title;
	string author;
	int pages;
	Book(string aTitle, string aAuthor, int aPages) {
		title = aTitle;
		author = aAuthor;
		pages = aPages;
	}
	Book() {
		title = "No title!";
		author = "No author";
		pages = 0;
	}
};

int main() {

	Book book1("Harry Potter", "JK Rowling", 711);
	Book book2;

	cout << book1.pages << endl;
	cout << book2.title << endl;

	return 0;
}