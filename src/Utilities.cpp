#include <iostream>
#include "Utilities.h"
using std::to_string;
/*-----------------------------------------------------------------------------*/
string ConvertToStr(double x) {
	string str;
	if (x - int(x) == 0)  //x is int
		str = to_string(int(x));
	
	else { //x is double
		string wrong_str = to_string(x);
		int i = 0;
		while (wrong_str[i] != '0') {
			str += wrong_str[i];
			i++;
		}
	}
	return str;
}
/*-----------------------------------------------------------------------------*/
void printHelp() {
    std::cout << std::endl <<
        "Following is the list of the calculator's available commands:\n" <<
        "eval(uate) num x - Evaluates function #num on x\n" <<
        "poly(nomial) N c0 c1 ... cN - 1 - Creates a polynomial with N coefficients\n" <<
        "mul(tiply) num1 num2 - Creates a function that is the multiplication of\n" <<
        "function #num1 and function #num2\n" <<
        "add num1 num2 - Creates a function that is the sum of function #num1 and\n" <<
        "function #num2\n" <<
        "comp(osite) num1 num2 - Creates a function that is the composition of\n" <<
        "function #num1 and function #num2\n" <<
        "log N num - Creates a function that computes log N of function #num\n" <<
        "del(ete) num - Deletes function #num from function list\n" <<
        "help - Prints this help screen\n" <<
        "exit - Exits the program\n" << std::endl;
}