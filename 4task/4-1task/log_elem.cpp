#include "log_elem.h"
class LogicalElement {
public:
 	bool Statement;
 	LogicalElement() {
     	Statement = NULL;
 	}
 	LogicalElement(bool a) {
     	Statement = a;
 	}
 	void SetStatement(bool State) {
     	Statement = State;
 	}
 	bool GetStatement() {
     	return Statement;
 	}
 	bool StateReverse() {
     	Statement = StateConvert(Statement);
		return Statement;
 	}
};
