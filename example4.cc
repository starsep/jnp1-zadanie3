#include "very_long_int.h"
#include <cassert>
#include <iostream>

int main() {
	{
		const int N = 1000;
		VeryLongInt x = 1;
		for (int i = 2; i <= N; ++i) {
			x *= i;
		}
	}

	return 0;
}
