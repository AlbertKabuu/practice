#include<iostream>
using namespace std;
class Pen {
	public:
		string color;
};

int main() {
	Pen pen;
	pen.color = "#EEEEEE";
	cout << "Color: " << pen.color << endl;
	return 0;
}
