#ifndef LOG_ELEM_H
#define LOG_ELEM_H
 
bool logMore(bool a, bool b){
	return a < b;
}
bool logLess(bool a, bool b) {
 	return a > b;
}
bool logEqul(bool a, bool b) {
 	return a == b;
}
bool StateConvert(bool a) {
 	return !a;
}
 
#endif
