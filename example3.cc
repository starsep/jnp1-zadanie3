#include "very_long_int.h"
//stuff in comments shouldn't compile

int main() {
	VeryLongInt x;
	VeryLongInt y(x);
	VeryLongInt z = std::move(y);
	VeryLongInt a("qqq");
	VeryLongInt b(std::string("qqq"));

	//VeryLongInt c(true);
	//VeryLongInt d('a');
	//VeryLongInt e(static_cast<char16_t>('a'));
	//VeryLongInt f(static_cast<char32_t>('a'));
	//VeryLongInt g(static_cast<double>(42));
	//VeryLongInt h(static_cast<float>(42));
	//VeryLongInt i(static_cast<long double>(42));

	VeryLongInt aa(42);
	VeryLongInt ab(42L);
	VeryLongInt ac(42LL);
	VeryLongInt ad(42U);
	VeryLongInt ae(42UL);
	VeryLongInt af(42ULL);

	const VeryLongInt ag(42);
	ag.numberOfBinaryDigits();
	ag.isValid();
	if (ag) {

	}
	ab = aa;
	aa = 0666;
	aa = 42L;
	aa = 42LL;
	aa = 42U;
	aa = 42UL;
	aa = 42ULL;
	aa = "42";
	aa = std::string("42");

	//aa = false;
	//aa = 'a';
	//aa = static_cast<char16_t>('a');
	//aa = static_cast<char32_t>('a');
	//aa = static_cast<double>(42);
	//aa = static_cast<float>(42);
	//aa = static_cast<long double>(42);

	aa += aa;
	aa -= aa;
	aa *= aa;
	aa /= aa;
	aa %= aa;
	aa <<= 42;
	aa >>= 42;
	aa == aa;
	aa != aa;
	aa < aa;
	aa <= aa;
	aa > aa;
	aa >= aa;

	//Zero() += Zero();
	//NaN() += NaN();

	Zero() + Zero();
	Zero() - Zero();
	Zero() * Zero();
	Zero() / Zero();
	Zero() % Zero();
	Zero() << 42;
	Zero() >> 42;
}
