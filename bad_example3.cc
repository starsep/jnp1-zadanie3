#include "very_long_int.h"
#include <iostream>

int main() {
	VeryLongInt c;
	c = c + "123";
	std::cerr << c + "123" << std::endl;
	std::cerr << "123" + c << std::endl;
	c += "123"; // błąd kompilacji
	return 0;
}