#include "very_long_int.h"
#include <iostream>
#include <algorithm>

VeryLongInt VeryLongInt::nan = VeryLongInt();

VeryLongInt::VeryLongInt()
	: isNaN(false) {
	bitRep.push_back(0);
}

VeryLongInt::VeryLongInt(const VeryLongInt &source)
	: bitRep(source.bitRep),
	  isNaN(source.isNaN) {
}

VeryLongInt::VeryLongInt(VeryLongInt &&source)
	: bitRep(std::move(source.bitRep)),
	  isNaN(std::move(source.isNaN)) {
}

VeryLongInt::VeryLongInt(int number) {
	VeryLongInt(static_cast<long long>(number));
}

VeryLongInt::VeryLongInt(long number) {
	VeryLongInt(static_cast<long long>(number));
}

VeryLongInt::VeryLongInt(unsigned long number) {
	VeryLongInt(static_cast<unsigned long long>(number));
}

VeryLongInt::VeryLongInt(long long number) {
	if (number < 0) {
		makeNaN();
	}
	else {
		VeryLongInt(static_cast<unsigned long long>(number));
	}
}

VeryLongInt::VeryLongInt(unsigned number) {
	VeryLongInt(static_cast<unsigned long long>(number));
}

VeryLongInt::VeryLongInt(unsigned long long number) {
	isNaN = false;
	for ( ; number > 0; number /= 2) {
		bitRep.push_back(number % 2);
	}
	//std::reverse(bitRep.begin(), bitRep.end());
}

VeryLongInt::VeryLongInt(const std::string &number) {
	//TODO
}

VeryLongInt::VeryLongInt(const char *number) {
	//TODO
}

void VeryLongInt::makeNaN() {
	if(!isNaN) {
		isNaN = true;
		bitRep.clear();
	}
}

bool VeryLongInt::isZero() const {
	return bitRep.size() == 1 && !bitRep[0];
}

size_t VeryLongInt::numberOfBinaryDigits() const {
	return bitRep.size();
}

bool VeryLongInt::isValid() const {
	return !isNaN;
}

VeryLongInt::operator bool() const {
	return isValid() && !isZero();
}

VeryLongInt& VeryLongInt::operator=(const VeryLongInt&) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator=(int) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator=(long long) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator=(unsigned) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator=(unsigned long long) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator+=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator-=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator*=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator/=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator%=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator<<=(unsigned long long) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator>>=(unsigned long long) {
	return *this; //TODO
}

const VeryLongInt operator+(const VeryLongInt &x, const VeryLongInt &y) {
	return VeryLongInt(x) += y;
}

const VeryLongInt operator-(const VeryLongInt &x, const VeryLongInt &y) {
	return VeryLongInt(x) -= y;
}

const VeryLongInt operator*(const VeryLongInt &x, const VeryLongInt &y) {
	return VeryLongInt(x) *= y;
}

const VeryLongInt operator/(const VeryLongInt &x, const VeryLongInt &y) {
	return VeryLongInt(x) /= y;
}

const VeryLongInt operator%(const VeryLongInt &x, const VeryLongInt &y) {
	return VeryLongInt(x) %= y;
}

const VeryLongInt operator<<(const VeryLongInt &x, unsigned long long y) {
	return VeryLongInt(x) <<= y;
}

const VeryLongInt operator>>(const VeryLongInt &x, unsigned long long y) {
	return VeryLongInt(x) >>= y;
}

bool operator==(const VeryLongInt &, const VeryLongInt &) {
	return false; //TODO
}

bool operator!=(const VeryLongInt &x, const VeryLongInt &y) {
	return !(x == y);
}

bool operator<(const VeryLongInt &, const VeryLongInt &) {
	return false; //TODO
}

bool operator<=(const VeryLongInt &x, const VeryLongInt &y) {
	return (x < y) || (x == y);
}

bool operator>(const VeryLongInt &x, const VeryLongInt &y) {
	return !(x <= y);
}

bool operator>=(const VeryLongInt &x, const VeryLongInt &y) {
	return !(x < y);
}

std::ostream & operator<<(std::ostream &ostream, const VeryLongInt &) {
	return ostream; //TODO
}

const VeryLongInt & Zero() {
	static const VeryLongInt zero = VeryLongInt();
	return zero;
}

const VeryLongInt & VeryLongInt::getNaN() {
	nan.makeNaN();
	return nan;
}

const VeryLongInt & NaN() {
	return VeryLongInt::getNaN();
}

VeryLongInt::~VeryLongInt() {
	//TODO
}


