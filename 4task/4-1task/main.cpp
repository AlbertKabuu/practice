#include <iostream>
#include "log_elem.h"
#include "log_elem.cpp"
using namespace std;
 
int main() {
 	LogicalElement A(true);
 	LogicalElement B(false);
 
 	cout << "Now:" << endl;
 	cout << "A: " << A.GetStatement() << endl;
 	cout << "B: " << B.GetStatement() << endl;
 
 	cout << endl;
 
 	cout << "From header: " << endl;
 	cout << "logMore: " << logMore(A.Statement, B.Statement) << endl;
 	cout << "logLess: " << logLess(A.Statement, B.Statement) << endl;
 	cout << "logEqul: " << logEqul(A.Statement, B.Statement) << endl;
 	cout << "Convert for A: " << StateConvert(A.Statement) << endl;
 	cout << "Convert for B: " << StateConvert(B.Statement) << endl;
 
 	cout << endl;
 
 	cout << "From .cpp:" << endl;
	cout << "A: " << A.GetStatement() << endl;
 	cout << "Reverse for A: " << A.StateReverse() << endl;

	cout << "B: " << B.GetStatement() << endl;
 	cout << "Reverse for B: " << B.StateReverse() << endl;

 
	return 0;
}
