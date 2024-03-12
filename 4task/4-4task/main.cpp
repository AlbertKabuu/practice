#include <iostream>
#include "TBook.h"
#include "TBook.cpp"
using namespace std;

int main() {
	TBook book;

	cout << "Name: " << book.Name << endl;
	cout << "Author: " << book.Author << endl;
	cout << "Count: " << book.Count << endl;

	return 0;
}
