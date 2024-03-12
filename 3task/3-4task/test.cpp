#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class TBook {
private:
	string Name;
	string Author;
	int Count;
public:
	void setParameters(string _name, string _author, int _count) {
		Name = _name;
		Author = _author;
		Count = _count;
	}
	
	string getName() {
		return Name;
	}
	
	string getAuthor() {
		return Author;
	}
	
	int getCount() {
		return Count;
	}
};

bool comp(TBook book1, TBook book2) {
	return book1.getAuthor() < book2.getAuthor();
}

int main() {
	TBook book[5];
	ifstream fin("config.txt");
	if (!fin) {
		cout << "er" << endl;
	}

	for (int i = 0; i < 5; i++) {
		string name, author, count_str;

		getline(fin, name);
		getline(fin, author);
		getline(fin, count_str);
		int count = stoi(count_str);

		book[i].setParameters(name, author, count);

	}
	fin.close();

	sort(book, book + 5, comp);
	for (int i = 0; i < 5; i++) {
		cout << "Name: " << book[i].getName() << endl;
		cout << "Author: " << book[i].getAuthor() << endl;
		cout << "Count: " << book[i].getCount() << endl;
	}

	return 0;
}
