#include<iostream>
using namespace std;
class Pen {
	private:
		string color;
	public:
		Pen(){
			color = "#EEEEEE";
		}
		string getColor(){
			return color;
		}
};

int main() {
	Pen pen;
	cout << "Color: " << pen.getColor() << endl;
	return 0;
}
