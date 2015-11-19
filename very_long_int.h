#ifndef VERY_LONG_INT_H
#define VERY_LONG_INT_H

#include <cstddef>
#include <ostream>
#include <string>
#include <vector>

class VeryLongInt {
private:
	std::vector<bool> bitRep;
	static VeryLongInt nan;
	bool isNaN;
	static const VeryLongInt & getNaN();
public:
	VeryLongInt();
	VeryLongInt(const VeryLongInt &);
	VeryLongInt(VeryLongInt &&);
	explicit VeryLongInt(unsigned);
	explicit VeryLongInt(unsigned long long);
	VeryLongInt(const std::string &);
	size_t numberOfBinaryDigits() const;
	bool isValid() const;
	explicit operator bool() const;
	VeryLongInt & operator=(const VeryLongInt&);
	VeryLongInt & operator=(unsigned long long);
	VeryLongInt & operator+=(const VeryLongInt &);
	VeryLongInt & operator-=(const VeryLongInt &); //
	VeryLongInt & operator*=(const VeryLongInt &);
	VeryLongInt & operator/=(const VeryLongInt &); //
	VeryLongInt & operator%=(const VeryLongInt &); //
	VeryLongInt & operator<<=(unsigned long long);
	VeryLongInt & operator>>=(unsigned long long); //
	friend VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &);
	friend VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &); //
	friend VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &);
	friend VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &); //
	friend VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &); //
	friend VeryLongInt operator<<(const VeryLongInt &, unsigned long long);
	friend VeryLongInt operator>>(const VeryLongInt &, unsigned long long); //
	friend bool operator==(const VeryLongInt &, const VeryLongInt &);
	friend bool operator!=(const VeryLongInt &, const VeryLongInt &); //
	friend bool operator<(const VeryLongInt &, const VeryLongInt &); //
	friend bool operator<=(const VeryLongInt &, const VeryLongInt &); //
	friend bool operator>(const VeryLongInt &, const VeryLongInt &);
	friend bool operator>=(const VeryLongInt &, const VeryLongInt &);
	friend std::ostream & operator<<(std::ostream &, const VeryLongInt &);
	friend const VeryLongInt & Zero();
	friend const VeryLongInt & NaN();
	~VeryLongInt();
};


#endif //VERY_LONG_INT_H