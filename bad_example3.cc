#include "very_long_int.h"
#include <iostream>

int main() {
	VeryLongInt c;
	c = c + "123";
	c += "123"; // błąd kompilacji
	return 0;
}