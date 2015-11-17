#ifndef VERY_LONG_INT_H
#define VERY_LONG_INT_H

#include <cstddef>
#include <ostream>
#include <string>

class VeryLongInt {
	public:
        VeryLongInt();
		VeryLongInt(const VeryLongInt &);
		VeryLongInt(VeryLongInt &&);
        explicit VeryLongInt(unsigned);
		explicit VeryLongInt(unsigned long long);
		VeryLongInt(const std::string &);
		size_t numberOfBinaryDigits() const;
        virtual bool isValid() const;
        explicit operator bool() const;
        VeryLongInt & operator=(const VeryLongInt&);
		VeryLongInt & operator+=(const VeryLongInt &);
		VeryLongInt & operator-=(const VeryLongInt &);
		VeryLongInt & operator*=(const VeryLongInt &);
		VeryLongInt & operator/=(const VeryLongInt &);
		VeryLongInt & operator%=(const VeryLongInt &);
		VeryLongInt & operator<<=(unsigned);
		VeryLongInt & operator>>=(unsigned);
        bool operator()();
		friend VeryLongInt operator+(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt operator-(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt operator*(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt operator/(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt operator%(const VeryLongInt &, const VeryLongInt &);
		friend VeryLongInt operator<<(const VeryLongInt &, unsigned);
		friend VeryLongInt operator>>(const VeryLongInt &, unsigned);
		friend bool operator==(const VeryLongInt &, const VeryLongInt &);
		friend bool operator!=(const VeryLongInt &, const VeryLongInt &);
		friend bool operator<(const VeryLongInt &, const VeryLongInt &);
		friend bool operator<=(const VeryLongInt &, const VeryLongInt &);
		friend bool operator>(const VeryLongInt &, const VeryLongInt &);
		friend bool operator>=(const VeryLongInt &, const VeryLongInt &);
		friend std::ostream & operator<<(std::ostream &, const VeryLongInt &);
		static const VeryLongInt & Zero();
		static const VeryLongInt & NaN();
		~VeryLongInt();
};

const VeryLongInt & Zero();
const VeryLongInt & NaN();

class Nan : public VeryLongInt {
    private:
        static const Nan singleton;
        Nan();
    public:
        virtual bool isValid();
        static const Nan & getNaN();
};

#endif //VERY_LONG_INT_H