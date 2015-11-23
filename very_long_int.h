#ifndef VERY_LONG_INT_H
#define VERY_LONG_INT_H

#include <cstddef>
#include <ostream>
#include <string>
#include <vector>

class VeryLongInt {
private:
	static VeryLongInt nan;
	std::vector<bool> bitRep;
	bool isNaN;

	static const VeryLongInt & getNaN();
	void makeNaN();
	bool isZero() const;
	void removeLeadingZeroes();
public:
	VeryLongInt();
	VeryLongInt(const VeryLongInt &);
	VeryLongInt(VeryLongInt &&);
	explicit VeryLongInt(const char *);
	explicit VeryLongInt(const std::string &);
	explicit VeryLongInt(bool) = delete;
	explicit VeryLongInt(char) = delete;
	explicit VeryLongInt(char16_t) = delete;
	explicit VeryLongInt(char32_t) = delete;
	explicit VeryLongInt(double) = delete;
	explicit VeryLongInt(float) = delete;
	explicit VeryLongInt(long double) = delete;
	VeryLongInt(int);
	VeryLongInt(long);
	VeryLongInt(long long);
	VeryLongInt(unsigned);
	VeryLongInt(unsigned long);
	VeryLongInt(unsigned long long);

	size_t numberOfBinaryDigits() const;
	bool isValid() const;
	explicit operator bool() const;

	VeryLongInt & operator=(const VeryLongInt&);
	VeryLongInt & operator=(int);
	VeryLongInt & operator=(long);
	VeryLongInt & operator=(long long);
	VeryLongInt & operator=(unsigned);
	VeryLongInt & operator=(unsigned long);
	VeryLongInt & operator=(unsigned long long);
	VeryLongInt & operator=(const char *);
	VeryLongInt & operator=(const std::string &);
	VeryLongInt & operator=(bool) = delete;
	VeryLongInt & operator=(char) = delete;
	VeryLongInt & operator=(char16_t) = delete;
	VeryLongInt & operator=(char32_t) = delete;
	VeryLongInt & operator=(double) = delete;
	VeryLongInt & operator=(float) = delete;
	VeryLongInt & operator=(long double) = delete;

	VeryLongInt & operator+=(const VeryLongInt &);
	VeryLongInt & operator-=(const VeryLongInt &); //
	VeryLongInt & operator*=(const VeryLongInt &);
	VeryLongInt & operator/=(const VeryLongInt &); //
	VeryLongInt & operator%=(const VeryLongInt &); //
	VeryLongInt & operator<<=(unsigned long long);
	VeryLongInt & operator>>=(unsigned long long); //

	friend bool operator==(const VeryLongInt &, const VeryLongInt &);
	friend bool operator<(const VeryLongInt &, const VeryLongInt &);

	friend std::ostream & operator<<(std::ostream &, const VeryLongInt &);

	friend const VeryLongInt & Zero();
	friend const VeryLongInt & NaN();

	~VeryLongInt() = default;
};

const VeryLongInt & Zero();
const VeryLongInt & NaN();

const VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &);
const VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &);
const VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &);
const VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &);
const VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &);
const VeryLongInt operator<<(const VeryLongInt &, unsigned long long);
const VeryLongInt operator>>(const VeryLongInt &, unsigned long long);

bool operator!=(const VeryLongInt &, const VeryLongInt &);
bool operator<=(const VeryLongInt &, const VeryLongInt &);
bool operator>(const VeryLongInt &, const VeryLongInt &);
bool operator>=(const VeryLongInt &, const VeryLongInt &);

#endif //VERY_LONG_INT_H