#include "very_long_int.h"
#include <iostream>

VeryLongInt VeryLongInt::nan = VeryLongInt();

VeryLongInt::VeryLongInt() {
	//TODO
}

VeryLongInt::VeryLongInt(const VeryLongInt &) {
	//TODO
}

VeryLongInt::VeryLongInt(VeryLongInt &&) {
	//TODO
}

VeryLongInt::VeryLongInt(unsigned) {
    //TODO
}

VeryLongInt::VeryLongInt(unsigned long long) {
    //TODO
}

VeryLongInt::VeryLongInt(const std::string &) {
	//TODO
}

size_t VeryLongInt::numberOfBinaryDigits() const {
	return 0; //TODO
}

bool VeryLongInt::isValid() const {
    return true;
}

VeryLongInt::operator bool() const {
    return true; //TODO
}

VeryLongInt& VeryLongInt::operator=(const VeryLongInt&) {
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

VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator<<(const VeryLongInt &, unsigned long long) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator>>(const VeryLongInt &, unsigned long long) {
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
    nan.isNaN = true;
    return nan;
}

const VeryLongInt & NaN() {
    return VeryLongInt::getNaN();
}

VeryLongInt::~VeryLongInt() {

}


