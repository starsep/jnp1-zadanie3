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

VeryLongInt::VeryLongInt(int number) :
		VeryLongInt(static_cast<long long>(number)) {
}

VeryLongInt::VeryLongInt(long number) :
		VeryLongInt(static_cast<long long>(number)) {
}

VeryLongInt::VeryLongInt(unsigned long number) :
		VeryLongInt(static_cast<unsigned long long>(number)) {
}

VeryLongInt::VeryLongInt(long long number) {
	if (number < 0) {
		makeNaN();
		return;
	}
	*this = VeryLongInt(static_cast<unsigned long long>(number));
}

VeryLongInt::VeryLongInt(unsigned number) :
		VeryLongInt(static_cast<unsigned long long>(number)) {
}

VeryLongInt::VeryLongInt(unsigned long long number) {
	isNaN = false;
	for (; number > 0; number /= 2) {
		bitRep.push_back(number % 2);
	}
	if(bitRep.empty()) { //0
		bitRep.push_back(0);
	}
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

	/*auto debug = [copy, &number] {
		for (size_t i = 0; i < number.size(); i++) {
			std::cerr << int(copy[i]);
		}
		std::cerr << "\n";
	};

	debug();*/

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
	isNaN = false;
	delete[] copy;
}

VeryLongInt::VeryLongInt(const char *number) {
	if (number == nullptr) {
		makeNaN();
		return;
	}
	*this = VeryLongInt(std::string(number));
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

VeryLongInt &VeryLongInt::operator=(const VeryLongInt &source) {
	isNaN = source.isNaN;
	bitRep = source.bitRep;
	return *this;
}

VeryLongInt &VeryLongInt::operator=(int source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(long source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(long long source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(unsigned source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(unsigned long source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(unsigned long long source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator=(const char *source) {
	if (source == nullptr) {
		makeNaN();
		return *this;
	}
	return operator=(static_cast<const VeryLongInt &>(std::string(source)));
}

VeryLongInt &VeryLongInt::operator=(const std::string &source) {
	return operator=(static_cast<const VeryLongInt &>(source));
}

VeryLongInt &VeryLongInt::operator+=(const VeryLongInt &number) {
	if (isNaN || number.isNaN) {
		makeNaN();
		return *this;
	}
	const std::vector<bool> &numberRep = number.bitRep;
	bitRep.resize(std::max(bitRep.size(), numberRep.size()) + 1);
	bool rest = false;
	for (size_t i = 0; i < numberRep.size(); i++) {
		char sum = bitRep[i];
		sum += rest;
		sum += numberRep[i];
		bitRep[i] = sum % 2;
		rest = sum / 2;
	}
	if (rest) {
		if (bitRep[numberRep.size()]) {
			bitRep[numberRep.size()] = false;
			bitRep[numberRep.size() + 1] = true;
		}
		else {
			bitRep[numberRep.size()] = true;
		}
	}
	removeLeadingZeroes();
	return *this;
}

VeryLongInt &VeryLongInt::operator-=(const VeryLongInt &number) {
	if (isNaN || number.isNaN || number > (*this)) {
		makeNaN();
		return *this;
	}

	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator*=(const VeryLongInt &number) {
	if (isNaN || number.isNaN) {
		makeNaN();
		return *this;
	}
	if (isZero()) {
		return *this;
	}

	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator/=(const VeryLongInt &number) {
	if (isNaN || !number) {
		makeNaN();
		return *this;
	}
	if (isZero()) {
		return *this;
	}

	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator%=(const VeryLongInt &number) {
	if (isNaN || !number) {
		makeNaN();
		return *this;
	}
	if (isZero()) {
		return *this;
	}

	return *this; //TODO
}

VeryLongInt &VeryLongInt::operator<<=(unsigned long long number) {
	if (isNaN || isZero()) {
		return *this;
	}
	const std::vector<bool> copy = bitRep;
	bitRep.clear();
	bitRep.resize(copy.size() + number);
	for (size_t i = 0; i < copy.size(); i++) {
		bitRep[number + i] = copy[i];
	}
	return *this;
}

VeryLongInt &VeryLongInt::operator>>=(unsigned long long) {
	if (isNaN || isZero()) {
		return *this;
	}
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

bool operator==(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN || x.bitRep.size() != y.bitRep.size()) {
		return false;
	}
	for (size_t i = 0; i < x.bitRep.size(); i++) {
		if (x.bitRep[i] != y.bitRep[i]) {
			return false;
		}
	}
	return true;
}

bool operator!=(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN) {
		return false;
	}
	return !(x == y);
}

bool operator<(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN) {
		return false;
	}
	if (x.bitRep.size() != y.bitRep.size()) {
		return x.bitRep.size() < y.bitRep.size();
	}
	for (size_t i = x.bitRep.size() - 1; i > 0; i--) {
		if (x.bitRep[i] < y.bitRep[i]) {
			return true;
		}
	}
	return x.bitRep[0] < y.bitRep[0];
}

bool operator<=(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN) {
		return false;
	}
	return (x < y) || (x == y);
}

bool operator>(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN) {
		return false;
	}
	return !(x <= y);
}

bool operator>=(const VeryLongInt &x, const VeryLongInt &y) {
	if (x.isNaN || y.isNaN) {
		return false;
	}
	return !(x < y);
}

std::ostream &operator<<(std::ostream &ostream, const VeryLongInt &number) {
	if (number.isNaN) {
		ostream << "NaN";
		return ostream;
	}
	std::string convertedToDecimal;
	std::string powerOf2;
	powerOf2 += char(1);
	auto multiplyBy2 = [](std::string &decimal) {
		char rest = 0;
		for (size_t i = 0; i < decimal.size(); i++) {
			decimal[i] *= 2;
			decimal[i] += rest;
			rest = decimal[i] / 10;
			decimal[i] -= rest * 10;
		}
		if (rest) {
			decimal += rest;
		}
	};
	auto removeLeadingZeroes = [](std::string &decimal) {
		while (decimal.size() > 1 && decimal.back() == 0) {
			decimal.pop_back();
		}
	};
	auto addToDecimal = [removeLeadingZeroes](std::string &decimal, const std::string &add) {
		decimal.resize(std::max(decimal.size(), add.size()) + 1);
		for (size_t i = 0; i < add.size(); i++) {
			decimal[i] += add[i];
			if (decimal[i] >= 10) {
				decimal[i + 1]++;
				decimal[i] -= 10;
			}
		}
		removeLeadingZeroes(decimal);
	};
	for (bool powerInSum : number.bitRep) {
		if (powerInSum) {
			addToDecimal(convertedToDecimal, powerOf2);
		}
		multiplyBy2(powerOf2);
	}
	for (size_t i = 0; i < convertedToDecimal.size(); i++) {
		convertedToDecimal[i] += '0';
	}
	std::reverse(convertedToDecimal.begin(), convertedToDecimal.end());
	ostream << convertedToDecimal;
	return ostream;
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

void VeryLongInt::removeLeadingZeroes() {
	while (bitRep.size() > 1 && !bitRep.back()) {
		bitRep.pop_back();
	}
}

