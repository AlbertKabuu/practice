#include <iostream>
using namespace std;

class LogicalElement {
public:
	bool Value;
	LogicalElement() {
		Value = true;
	}
};

int main() {
	LogicalElement A;
	LogicalElement B;

	cout << "A: " << A.Value << endl;
	cout << "B: " << B.Value << endl;

	A.Value = true;
	B.Value = true;

	return 0;
}
