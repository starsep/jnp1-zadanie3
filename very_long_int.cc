#include "very_long_int.h"
#include <iostream>
#include <algorithm>
#include <cstring>

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
		return;
	}
	VeryLongInt(static_cast<unsigned long long>(number));
}

VeryLongInt::VeryLongInt(unsigned number) {
	VeryLongInt(static_cast<unsigned long long>(number));
}

VeryLongInt::VeryLongInt(unsigned long long number) {
	isNaN = false;
	for (; number > 0; number /= 2) {
		bitRep.push_back(number % 2);
	}
	//std::reverse(bitRep.begin(), bitRep.end());
}

VeryLongInt::VeryLongInt(const std::string &number) {
	//TODO: remove debug if working
	bool onlyDigits = std::find_if_not(number.begin(), number.end(), [](char c) {
		return std::isdigit(c);
	}) == number.end();
	bool isCorrectNumber = !number.empty() && onlyDigits;

	if (!isCorrectNumber) {
		makeNaN();
		return;
	}
	//założenie: wiodące zera są ok jako argument

	char *copy = new char[number.size() + 1];
	std::strcpy(copy, number.c_str());
	char *endOfCopy = copy + number.size();
	std::for_each(copy, endOfCopy, [](char &c) {
		c -= '0';
	});

	auto debug = [copy, &number] {
		for (size_t i = 0; i < number.size(); i++) {
			std::cerr << int(copy[i]);
		}
		std::cerr << "\n";
	};

	//debug();

	char *lastDigit = copy + number.size() - 1;
	auto nonZero = [](char c) {
		return c != '\0';
	};
	size_t firstNonZeroIndex = std::find_if(copy, copy + number.size(), nonZero) - copy;
	while (firstNonZeroIndex != number.size()) {
		bitRep.push_back(*lastDigit % 2);
		bool rest = 0;
		std::for_each(copy + firstNonZeroIndex, endOfCopy, [&rest](char &c) {
			c += rest * 10;
			rest = c % 2;
			c /= 2;
		});
		//debug();
		firstNonZeroIndex = std::find_if(copy + firstNonZeroIndex, copy + number.size(), nonZero) - copy;
	}
	/*std::cerr << number << '\n';
	for(bool x : bitRep) {
		std::cerr << int(x);
	}
	std::cerr << '\n';*/
	delete copy;
}

VeryLongInt::VeryLongInt(const char *number) {
	if (number == nullptr) {
		makeNaN();
		return;
	}
	VeryLongInt(std::string(number));
}

void VeryLongInt::makeNaN() {
	isNaN = true;
	bitRep.clear();
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

VeryLongInt &VeryLongInt::operator=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator=(int) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator=(long long) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator=(unsigned) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator=(unsigned long long) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator+=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator-=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator*=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator/=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator%=(const VeryLongInt &) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator<<=(unsigned long long) {
	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator>>=(unsigned long long) {
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

std::ostream &operator<<(std::ostream &ostream, const VeryLongInt &) {
	return ostream; //TODO
}

const VeryLongInt &Zero() {
	static const VeryLongInt zero = VeryLongInt();
	return zero;
}

const VeryLongInt &VeryLongInt::getNaN() {
	nan.makeNaN();
	return nan;
}

const VeryLongInt &NaN() {
	return VeryLongInt::getNaN();
}

VeryLongInt::~VeryLongInt() {
	//TODO
}


