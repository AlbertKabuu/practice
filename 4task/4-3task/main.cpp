#include <iostream>
#include "log_element.h"
#include "log_element.cpp"
using namespace std;

int main() {
	LogicalElement A;
	LogicalElement B;

	cout << "A: " << A.Value << endl;
	cout << "B: " << B.Value << endl;

	return 0;
}
