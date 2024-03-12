#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class TPen {
private:
	string FColor;
public:
	TPen() {}
	string getColor() {
		return FColor;
	}
	void setColor(string _color) {
		FColor = _color;
	}
};

int main()
{
	const int SIZE = 3;
	TPen pen[SIZE];
	ifstream fin("config.txt");
	if (!fin) {
		cout << "er" << endl;
		return 1;
	}

	int i = 0;
	while (!fin.eof() && i < SIZE) {
		string temp;
		getline(fin, temp);
		pen[i].setColor(temp);
		i++;
	}
	fin.close();

	for (int j = 0; j < SIZE; j++) {
		cout << "color: " << pen[j].getColor() << endl;
	}

	return 0;
}
