#include "very_long_int.h"

VeryLongInt::VeryLongInt() {
	//TODO
}

VeryLongInt::VeryLongInt(const VeryLongInt &) {
	//TODO
}

VeryLongInt::VeryLongInt(VeryLongInt &&) {
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

VeryLongInt & VeryLongInt::operator<<=(unsigned) {
	return *this; //TODO
}

VeryLongInt & VeryLongInt::operator>>=(unsigned) {
	return *this; //TODO
}

bool VeryLongInt::operator()() {
    return isValid(); //TODO
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

VeryLongInt operator<<(const VeryLongInt &, unsigned) {
    return VeryLongInt(); //TODO
}

VeryLongInt operator>>(const VeryLongInt &, unsigned) {
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

VeryLongInt::~VeryLongInt() {

}

const Nan Nan::singleton = Nan();

Nan::Nan() {
}

const Nan & Nan::getNaN() {
    return singleton;
}

bool Nan::isValid() {
    return false;
}

const VeryLongInt & Zero() {
    static const VeryLongInt singleton = VeryLongInt();
    return singleton;
}
const VeryLongInt & NaN() {
    return Nan::getNaN();
}

