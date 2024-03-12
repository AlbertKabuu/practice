#include <iostream>
class Car{
	public:
	double x;
	double v;
	int p;
	
};
int main(){
	using namespace std;
	Car car;
	cout << "X:" << car.x<< endl;
	cout << "P:" << car.p<< endl;
	cout << "V:" << car.v<< endl;
	car.x = 1;
	car.p = 11;
	car.v = 111;
	cout << "X:" << car.x<< endl;
	cout << "P:" << car.p<< endl;
	cout << "V:" << car.v<< endl;
	return 0;
}
