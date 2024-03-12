#include<iostream>
using namespace std;
class TPen {
private:
	int FColor;
public:
	int getColor(){
		return FColor;
	};
	void setColor(int _Color)
	{
		FColor = _Color;
	}

};

int main() {
	TPen pen;
	pen.setColor(000000);
	cout << pen.getColor() << endl;

	return 0;
}
