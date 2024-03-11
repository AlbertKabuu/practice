#include <iostream>
#include <fstream>
#include <string>
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
		void setLength(int newLength){
			length = newLength;
		}
		void setWidth(int newWidth){
			width = newWidth;
		}
		void setParameters(){
			ifstream file;
			
			file.open("C:\\Users\\Админ\\Desktop\\xv\practice\1task\1-3task\config.txt");
			if (file.is_open()) {
				string line;
				
				getline(file, line);
				size_t slashPos = line.find("\\");
				string firstNumber = line.substr(0, slashPos);
				length = stoi(firstNumber);

				getline(file, line);
				string secondNumber = line.substr(slashpos + 1);
				width = stoi(secondNumber);

				file.close();
			}
			else {
				cout << "Unable to open file" << endl;
			}
		}
		void showParameters() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
		
};

int main() {
    Road road;
    road.showParameters();
	
	road.setParameters();
    road.showParameters();
    return 0;
}
