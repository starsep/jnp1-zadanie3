#include "very_long_int.h"
#include <cassert>
#include <iostream>

int main() {
	{
		for (int i = 0; i < 1000; i++) {
			VeryLongInt x(100 + i);
			for (int j = 0; j < 100; j++) {
				VeryLongInt y(j);
				int q = 100 + i - j;
				VeryLongInt z(q);
				if(x - y == z) {
					//std::cerr << x << " " << y << " " << z << '\n';
				}
			}
		}
	}
	{
		for (int i = 0; i < 100; i++) {
			VeryLongInt x(i);
			for (int j = 0; j < 100; j++) {
				VeryLongInt y(j);
				assert((i < j) == (x < y));
			}
		}
	}
	{
		VeryLongInt x = 1;
		x /= 0;
		assert(!x.isValid());
	}

	{
		VeryLongInt x = 100;
		x -= 101;
		assert(!x.isValid());
	}

	{
		VeryLongInt x = 23;
		VeryLongInt y = x;
		assert(x == y);
	}

	{
		VeryLongInt x = 23;
		VeryLongInt y = 32;
		x = y;
		assert(x == y);
	}

	{
		VeryLongInt x = 23;
		VeryLongInt y = 32;
		assert(y > x);
	}

	{
		VeryLongInt x = 23;
		VeryLongInt y = 32;
		assert(y >= x);
	}

	{
		VeryLongInt x = NaN();
		assert(!x.isValid());
	}


	{
		VeryLongInt x = 10;
		if (x)
			assert(1);
		else
			assert(0);
	}


	{
		VeryLongInt x = 1;
		x <<= 123;
		x >>= 120;
		assert(8 == x);
	}

	{
		VeryLongInt x = 1;
		for (int i = 1; i <= 100; ++i) {
			x *= 2;
			//std::cerr << "X = " << x << "\n";
		}
		//std::cerr << "x / 3 = " << x / VeryLongInt(3) << "\n";
		//assert(x % 3 == 1);
	}

	{
		VeryLongInt x = Zero();
		assert(x == 0);
	}

	{
		const int N = 100;
		VeryLongInt x = 1;
		for (int i = 1; i < N; ++i) {
			x *= 2;
			//std::cerr << x << "\n";
		}
		assert(x.numberOfBinaryDigits() == N);
	}


	{
		VeryLongInt x("1234567890123456789012345678901234567890");
		VeryLongInt z = x;
		VeryLongInt y("777777777777777777777777777777777777777");
		x = x + y;
		x -= y;
		assert(x == z);
	}

	{
		VeryLongInt x(std::string("12345678"));
		VeryLongInt y(12345678U);
		assert(x == y);
	}


	{
		VeryLongInt x("12345678901234567890");
		VeryLongInt y(12345678901234567890UL);
		assert(x == y);
		//std::cout << y << std::endl;
	}

	{
		VeryLongInt x("1234567890123456789012345678901234567890");
		VeryLongInt y("1204567890123456789012345678901234567890");
		VeryLongInt z("30000000000000000000000000000000000000");
		assert(z == x - y);
	}


	{
		VeryLongInt x("10000000000");
		VeryLongInt y("100000000000");
		VeryLongInt z("1000000000000000000000");
		assert(z == x * y);
	}

	{
		const int N = 100;
		VeryLongInt x = 1;
		for (int i = 2; i <= N; ++i) {
			x *= i;
			if (i % 100 == 0) {
				//std::cerr << "* = " << i << "\n";
			}
		}
		for (int i = 2; i <= N; ++i) {
			x /= i;
			//std::cerr << i << '\n';
		}
		assert(x == 1);
	}

	{
		assert(Zero().numberOfBinaryDigits() == 1);
		assert(NaN().numberOfBinaryDigits() == 0);
	}


	{
		VeryLongInt x(1);
		VeryLongInt y(2);
		VeryLongInt z = x * y;
		assert(z == y);
	}
	{
		short int y = 5;
		VeryLongInt x(y);
	}
	{
		VeryLongInt x(4101);
		VeryLongInt y(5504);
		assert(x % y == x);
	}

	return 0;
}
