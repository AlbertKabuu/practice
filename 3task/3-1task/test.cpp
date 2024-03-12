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
		void setColor(string _color){
			if (_color.length() != 7){

			} else{color = _color;}
			
		}
};

int main() {
	Pen pen;
	pen.setColor("#AAAAAA");
	cout << "Color: " << pen.getColor() << endl;
	return 0;
}
