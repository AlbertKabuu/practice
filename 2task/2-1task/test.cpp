#include <iostream>
using namespace std;

class Car {
	private:
		int x, p, v;
		
	public:
		Car() {
			x = 0;
			p = 0;
			v = 0;
		}
		Car(int x, int p, int v) {
			this->x = x;
			this->p = p;
			this->v = v;
		}
		void showParameters() {
			cout << "X: " << x << endl;
			cout << "P: " << p << endl;
			cout << "V: " << v << endl;
		}
		void setParameters(int x, int p, int v) {
			this->x = x;
			this->p = p;
			this->v = v;
		}
};

int main() {
	Car car(1, 11, 111);
	car.showParameters();
	car.setParameters(2, 22, 222);
	car.showParameters();
	
	Car car1;
	car1.showParameters();
}


