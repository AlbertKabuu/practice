#include<iostream>
class Road{
public:
	double length;
	int width;
	Road();
};
Road::Road() {
	length = 120.2;
	width = 13;
}
int main() {
	using namespace std;
	cout << "Test v0.1:Ok.\n";
	Road road;
	cout << "Before access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	road.length = 4535.7;
	road.width = 12222;
	cout << "\nAfter access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
