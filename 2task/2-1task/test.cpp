#include<iostream>
using namespace std;

class Car{
	public:
		double x;
		double v;
		int p;
		Car();
};

Car::Car(){
	x = 0;
	v = 0;
	p = 0;
}

int main(){
	Car car;
	cout << "X: " << car.x << endl;
	cout << "V: " << car.v << endl;
	cout << "P: " << car.p << endl;

	car.x = 1.5;
	car.v = 11.5;
	car.p = 111;
	
	cout << "X: " << car.x << endl;
	cout << "V: " << car.v << endl;
	cout << "P: " << car.p << endl;
}

