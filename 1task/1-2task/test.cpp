#include <iostream>
using namespace std;

class Road {
	private:
		int length;
		int width;
		
	public:
		Road() {
			length = 0;
			width = 0;
		}
		void setLength(int newLength) {
			length = newLength;
		}
		void setWidth(int newWidth) {
			width = newWidth;
		}
		void showParameters() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
};

int main() {
    Road road;
    road.showParameters();

    road.setLength(150);
    road.setWidth(75);
    road.showParameters();
    return 0;
}
