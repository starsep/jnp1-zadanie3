#include "very_long_int.h"
#include <iostream>
#include <algorithm>

VeryLongInt VeryLongInt::nan = VeryLongInt();

VeryLongInt::VeryLongInt() {
    bitRep.push_back(0);
    isNaN = false;
}

VeryLongInt::VeryLongInt(const VeryLongInt &source) {
    bitRep = source.bitRep;
    isNaN = source.isNaN;
}

VeryLongInt::VeryLongInt(VeryLongInt &&) {
    //TODO
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
    //TODO
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
    return true;
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

const VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator<<(const VeryLongInt &, unsigned long long) {
    return VeryLongInt(); //TODO
}

const VeryLongInt operator>>(const VeryLongInt &, unsigned long long) {
    return VeryLongInt(); //TODO
}

bool operator==(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
}

bool operator!=(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
}

bool operator<(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
}

bool operator<=(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
}

bool operator>(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
}

bool operator>=(const VeryLongInt &, const VeryLongInt &) {
    return false; //TODO
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

}


