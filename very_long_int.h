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
	void makeNaN();
	static const VeryLongInt & getNaN();
	bool isZero() const;

public:

	VeryLongInt();
	VeryLongInt(const VeryLongInt &);
	VeryLongInt(VeryLongInt &&);
	explicit VeryLongInt(const char *);
	VeryLongInt(const std::string &);
	VeryLongInt(bool) = delete;
	VeryLongInt(char) = delete;
	VeryLongInt(char16_t) = delete;
	VeryLongInt(char32_t) = delete;
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

	VeryLongInt & operator+=(const VeryLongInt &);
	VeryLongInt & operator-=(const VeryLongInt &); //
	VeryLongInt & operator*=(const VeryLongInt &);
	VeryLongInt & operator/=(const VeryLongInt &); //
	VeryLongInt & operator%=(const VeryLongInt &); //
	VeryLongInt & operator<<=(unsigned long long);
	VeryLongInt & operator>>=(unsigned long long); //

	friend const VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &);
	friend const VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &);
	friend const VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &);
	friend const VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &);
	friend const VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &);
	friend const VeryLongInt operator<<(const VeryLongInt &, unsigned long long);
	friend const VeryLongInt operator>>(const VeryLongInt &, unsigned long long);

	friend bool operator==(const VeryLongInt &, const VeryLongInt &);
	friend bool operator!=(const VeryLongInt &, const VeryLongInt &);
	friend bool operator<(const VeryLongInt &, const VeryLongInt &);
	friend bool operator<=(const VeryLongInt &, const VeryLongInt &);
	friend bool operator>(const VeryLongInt &, const VeryLongInt &);
	friend bool operator>=(const VeryLongInt &, const VeryLongInt &);

	friend std::ostream & operator<<(std::ostream &, const VeryLongInt &);

	friend const VeryLongInt & Zero();
	friend const VeryLongInt & NaN();

	~VeryLongInt() = default;
};

const VeryLongInt & Zero();
const VeryLongInt & NaN();


#endif //VERY_LONG_INT_H