#ifndef VERY_LONG_INT_H
#define VERY_LONG_INT_H

#include <cstddef>
#include <ostream>
#include <string>

class VeryLongInt {
	public:
		VeryLongInt();
		VeryLongInt(const VeryLongInt &);
		VeryLongInt(unsigned long long);
		VeryLongInt(const char *);
		VeryLongInt(const std::string &);
		size_t numberOfBinaryDigits();
		VeryLongInt & operator+=(const VeryLongInt &);
		VeryLongInt & operator-=(const VeryLongInt &);
		VeryLongInt & operator*=(const VeryLongInt &);
		VeryLongInt & operator/=(const VeryLongInt &);
		VeryLongInt & operator%=(const VeryLongInt &);
		VeryLongInt & operator<<=(unsigned);
		VeryLongInt & operator>>=(unsigned);
		friend VeryLongInt & operator+(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt & operator-(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt & operator*(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt & operator/(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt & operator%(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt & operator<<(const VeryLongInt &, unsigned);
		friend VeryLongInt & operator>>(const VeryLongInt &, unsigned);
		friend bool operator==(const VeryLongInt &, const VeryLongInt &);
		friend bool operator!=(const VeryLongInt &, const VeryLongInt &);
		friend bool operator<(const VeryLongInt &, const VeryLongInt &);
		friend bool operator<=(const VeryLongInt &, const VeryLongInt &);
		friend bool operator>(const VeryLongInt &, const VeryLongInt &);
		friend bool operator>=(const VeryLongInt &, const VeryLongInt &);
		friend std::ostream & operator<<(std::ostream &, const VeryLongInt &);
		const VeryLongInt & Zero();
		const VeryLongInt & NaN();
};

#endif //VERY_LONG_INT_H