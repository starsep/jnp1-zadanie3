#include "very_long_int.h"
#include <cassert>
#include <string>
#include <sstream>

using namespace std;

int main() {
  //
  // Grupa testów 1**
  // Testy poprawności interfejsu klasy
  //

  // Testy z grupy 1**, które powinny zakończyć się poprawnie.

  #if TEST_NUM == 101
    VeryLongInt a;
    VeryLongInt b(0);
    VeryLongInt c = 0;
    VeryLongInt d(1);
    VeryLongInt e = 1;
    VeryLongInt f(1U);
    VeryLongInt g = 1U;
    VeryLongInt h(1234567890L);
    VeryLongInt i = 1234567890L;
    VeryLongInt j(3456789012UL);
    VeryLongInt k = 3456789012UL;
    VeryLongInt l(1234567890LL);
    VeryLongInt m = 1234567890LL;
    VeryLongInt n(3456789012ULL);
    VeryLongInt o = 3456789012ULL;
    VeryLongInt p(-1);
    VeryLongInt q = -1;
    VeryLongInt r(-1L);
    VeryLongInt s = -1L;
    VeryLongInt t(-1LL);
    VeryLongInt u = -1LL;
  #endif

  #if TEST_NUM == 102
    VeryLongInt a("0");
    VeryLongInt b(string("0"));
    VeryLongInt c("");
    VeryLongInt d(string(""));
    VeryLongInt e("e");
    VeryLongInt f(string("f"));
  #endif

  #if TEST_NUM == 103
    try {
      VeryLongInt((char const *)0);
    }
    catch (...) {
    }
  #endif

  #if TEST_NUM == 104
    VeryLongInt x, y;
    x += y;
    x -= y;
    x *= y;
    x /= y;
    x %= y;
  #endif

  #if TEST_NUM == 105
    VeryLongInt x;
    x += 0;
    x += 1;
    x += 1U;
    x += 10000000000L;
    x += 30000000000UL;
    x += 10000000000LL;
    x += 30000000000ULL;
    x -= 0;
    x -= 1;
    x -= 1U;
    x -= 10000000000L;
    x -= 30000000000UL;
    x -= 10000000000LL;
    x -= 30000000000ULL;
    x *= 0;
    x *= 1;
    x *= 1U;
    x *= 10000000000L;
    x *= 30000000000UL;
    x *= 10000000000LL;
    x *= 30000000000ULL;
    x /= 0;
    x /= 1;
    x /= 1U;
    x /= 10000000000L;
    x /= 30000000000UL;
    x /= 10000000000LL;
    x /= 30000000000ULL;
    x %= 0;
    x %= 1;
    x %= 1U;
    x %= 10000000000L;
    x %= 30000000000UL;
    x %= 10000000000LL;
    x %= 30000000000ULL;
    x <<= 0;
    x <<= 1;
    x <<= 1U;
    x <<= 10000000000L;
    x <<= 30000000000UL;
    x <<= 10000000000LL;
    x <<= 30000000000ULL;
    x >>= 0;
    x >>= 1;
    x >>= 1U;
    x >>= 10000000000L;
    x >>= 30000000000UL;
    x >>= 10000000000LL;
    x >>= 30000000000ULL;
  #endif

  #if TEST_NUM == 106
    VeryLongInt x, y, z;
    z = x + y;
    z = x - y;
    z = x * y;
    z = x / y;
    z = x % y;
  #endif

  #if TEST_NUM == 107
    VeryLongInt x, y;
    y = x + 0;
    y = x + 1;
    y = x + 1U;
    y = x + 10000000000L;
    y = x + 30000000000UL;
    y = x + 10000000000LL;
    y = x + 30000000000ULL;
    y = x - 0;
    y = x - 1;
    y = x - 1U;
    y = x - 10000000000L;
    y = x - 30000000000UL;
    y = x - 10000000000LL;
    y = x - 30000000000ULL;
    y = x * 0;
    y = x * 1;
    y = x * 1U;
    y = x * 10000000000L;
    y = x * 30000000000UL;
    y = x * 10000000000LL;
    y = x * 30000000000ULL;
    y = x / 0;
    y = x / 1;
    y = x / 1U;
    y = x / 10000000000L;
    y = x / 30000000000UL;
    y = x / 10000000000LL;
    y = x / 30000000000ULL;
    y = x % 0;
    y = x % 1;
    y = x % 1U;
    y = x % 10000000000L;
    y = x % 30000000000UL;
    y = x % 10000000000LL;
    y = x % 30000000000ULL;
    y = x << 0;
    y = x << 1;
    y = x << 1U;
    y = x << 10000000000L;
    y = x << 30000000000UL;
    y = x << 10000000000LL;
    y = x << 30000000000ULL;
    y = x >> 0;
    y = x >> 1;
    y = x >> 1U;
    y = x >> 10000000000L;
    y = x >> 30000000000UL;
    y = x >> 10000000000LL;
    y = x >> 30000000000ULL;
    y = 0 + x;
    y = 1 + x;
    y = 1U + x;
    y = 10000000000L + x;
    y = 30000000000UL + x;
    y = 10000000000LL + x;
    y = 30000000000ULL + x;
    y = 0 - x;
    y = 1 - x;
    y = 1U - x;
    y = 10000000000L - x;
    y = 30000000000UL - x;
    y = 10000000000LL - x;
    y = 30000000000ULL - x;
    y = 0 * x;
    y = 1 * x;
    y = 1U * x;
    y = 10000000000L * x;
    y = 30000000000UL * x;
    y = 10000000000LL * x;
    y = 30000000000ULL * x;
    y = 0 / x;
    y = 1 / x;
    y = 1U / x;
    y = 10000000000L / x;
    y = 30000000000UL / x;
    y = 10000000000LL / x;
    y = 30000000000ULL / x;
    y = 0 % x;
    y = 1 % x;
    y = 1U % x;
    y = 10000000000L % x;
    y = 30000000000UL % x;
    y = 10000000000LL % x;
    y = 30000000000ULL % x;
  #endif

  #if TEST_NUM == 108
    VeryLongInt x, y;
    bool z;
    z = x == y;
    z = x != y;
    z = x < y;
    z = x > y;
    z = x <= y;
    z = x >= y;
    assert(z || !z);
  #endif

  #if TEST_NUM == 109
    VeryLongInt x;
    bool z;
    z = x == 0;
    z = x != 0;
    z = x < 0;
    z = x > 0;
    z = x <= 0;
    z = x >= 0;
    z = x == 1;
    z = x != 1;
    z = x < 1;
    z = x > 1;
    z = x <= 1;
    z = x >= 1;
    z = x == 1U;
    z = x != 1U;
    z = x < 1U;
    z = x > 1U;
    z = x <= 1U;
    z = x >= 1U;
    z = x == 10000000000L;
    z = x != 10000000000L;
    z = x < 10000000000L;
    z = x > 10000000000L;
    z = x <= 10000000000L;
    z = x >= 10000000000L;
    z = x == 10000000000UL;
    z = x != 10000000000UL;
    z = x < 10000000000UL;
    z = x > 10000000000UL;
    z = x <= 10000000000UL;
    z = x >= 10000000000UL;
    z = x == 10000000000LL;
    z = x != 10000000000LL;
    z = x < 10000000000LL;
    z = x > 10000000000LL;
    z = x <= 10000000000LL;
    z = x >= 10000000000LL;
    z = x == 10000000000ULL;
    z = x != 10000000000ULL;
    z = x < 10000000000ULL;
    z = x > 10000000000ULL;
    z = x <= 10000000000ULL;
    z = x >= 10000000000ULL;
    z = 0 == x;
    z = 0 != x;
    z = 0 < x;
    z = 0 > x;
    z = 0 <= x;
    z = 0 >= x;
    z = 1 == x;
    z = 1 != x;
    z = 1 < x;
    z = 1 > x;
    z = 1 <= x;
    z = 1 >= x;
    z = 1U == x;
    z = 1U != x;
    z = 1U < x;
    z = 1U > x;
    z = 1U <= x;
    z = 1U >= x;
    z = 10000000000L == x;
    z = 10000000000L != x;
    z = 10000000000L < x;
    z = 10000000000L > x;
    z = 10000000000L <= x;
    z = 10000000000L >= x;
    z = 10000000000UL == x;
    z = 10000000000UL != x;
    z = 10000000000UL < x;
    z = 10000000000UL > x;
    z = 10000000000UL <= x;
    z = 10000000000UL >= x;
    z = 10000000000LL == x;
    z = 10000000000LL != x;
    z = 10000000000LL < x;
    z = 10000000000LL > x;
    z = 10000000000LL <= x;
    z = 10000000000LL >= x;
    z = 10000000000ULL == x;
    z = 10000000000ULL != x;
    z = 10000000000ULL < x;
    z = 10000000000ULL > x;
    z = 10000000000ULL <= x;
    z = 10000000000ULL >= x;
    assert(z || !z);
  #endif

  // Testy z grupy 1**, które powinny zakończyć się błędem kompilacji.

  #if TEST_NUM == 110
    VeryLongInt x('1');
  #endif

  #if TEST_NUM == 111
    VeryLongInt x(true);
  #endif

  #if TEST_NUM == 112
    VeryLongInt x(false);
  #endif

  #if TEST_NUM == 113
    VeryLongInt x;
    x = "1";
  #endif

  #if TEST_NUM == 114
    VeryLongInt x;
    x = string("1");
  #endif

  #if TEST_NUM == 115
    VeryLongInt x;
    x += "1";
  #endif

  #if TEST_NUM == 116
    VeryLongInt x;
    x += string("1");
  #endif

  #if TEST_NUM == 117
    VeryLongInt x;
    x -= "1";
  #endif

  #if TEST_NUM == 118
    VeryLongInt x;
    x -= string("1");
  #endif

  #if TEST_NUM == 119
    VeryLongInt x;
    x *= "1";
  #endif

  #if TEST_NUM == 120
    VeryLongInt x;
    x *= string("1");
  #endif

  #if TEST_NUM == 121
    VeryLongInt x;
    x /= "1";
  #endif

  #if TEST_NUM == 122
    VeryLongInt x;
    x /= string("1");
  #endif

  #if TEST_NUM == 123
    VeryLongInt x;
    x %= "1";
  #endif

  #if TEST_NUM == 124
    VeryLongInt x;
    x %= string("1");
  #endif

  #if TEST_NUM == 125
    VeryLongInt x, y;
    y = x + "1";
  #endif

  #if TEST_NUM == 126
    VeryLongInt x, y;
    y = x + string("1");
  #endif

  #if TEST_NUM == 127
    VeryLongInt x, y;
    y = "1" + x;
  #endif

  #if TEST_NUM == 128
    VeryLongInt x, y;
    y = string("1") + x;
  #endif

  #if TEST_NUM == 129
    VeryLongInt x, y;
    y = x - "1";
  #endif

  #if TEST_NUM == 130
    VeryLongInt x, y;
    y = x - string("1");
  #endif

  #if TEST_NUM == 131
    VeryLongInt x, y;
    y = "1" - x;
  #endif

  #if TEST_NUM == 132
    VeryLongInt x, y;
    y = string("1") - x;
  #endif

  #if TEST_NUM == 133
    VeryLongInt x, y;
    y = x * "1";
  #endif

  #if TEST_NUM == 134
    VeryLongInt x, y;
    y = x * string("1");
  #endif

  #if TEST_NUM == 135
    VeryLongInt x, y;
    y = "1" * x;
  #endif

  #if TEST_NUM == 136
    VeryLongInt x, y;
    y = string("1") * x;
  #endif

  #if TEST_NUM == 137
    VeryLongInt x, y;
    y = x / "1";
  #endif

  #if TEST_NUM == 138
    VeryLongInt x, y;
    y = x / string("1");
  #endif

  #if TEST_NUM == 139
    VeryLongInt x, y;
    y = "1" / x;
  #endif

  #if TEST_NUM == 140
    VeryLongInt x, y;
    y = string("1") / x;
  #endif

  #if TEST_NUM == 141
    VeryLongInt x, y;
    y = x % "1";
  #endif

  #if TEST_NUM == 142
    VeryLongInt x, y;
    y = x % string("1");
  #endif

  #if TEST_NUM == 143
    VeryLongInt x, y;
    y = "1" % x;
  #endif

  #if TEST_NUM == 144
    VeryLongInt x, y;
    y = string("1") % x;
  #endif

  #if TEST_NUM == 145
    VeryLongInt x;
    bool y;
    y = x == "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 146
    VeryLongInt x;
    bool y;
    y = x == string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 147
    VeryLongInt x;
    bool y;
    y = "1" == x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 148
    VeryLongInt x;
    bool y;
    y = string("1") == x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 149
    VeryLongInt x;
    bool y;
    y = x != "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 150
    VeryLongInt x;
    bool y;
    y = x != string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 151
    VeryLongInt x;
    bool y;
    y = "1" != x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 152
    VeryLongInt x;
    bool y;
    y = string("1") != x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 153
    VeryLongInt x;
    bool y;
    y = x < "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 154
    VeryLongInt x;
    bool y;
    y = x < string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 155
    VeryLongInt x;
    bool y;
    y = "1" < x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 156
    VeryLongInt x;
    bool y;
    y = string("1") < x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 157
    VeryLongInt x;
    bool y;
    y = x <= "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 158
    VeryLongInt x;
    bool y;
    y = x <= string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 159
    VeryLongInt x;
    bool y;
    y = "1" <= x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 160
    VeryLongInt x;
    bool y;
    y = string("1") <= x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 161
    VeryLongInt x;
    bool y;
    y = x > "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 162
    VeryLongInt x;
    bool y;
    y = x > string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 163
    VeryLongInt x;
    bool y;
    y = "1" > x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 164
    VeryLongInt x;
    bool y;
    y = string("1") > x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 165
    VeryLongInt x;
    bool y;
    y = x >= "1";
    assert (y || !y);
  #endif

  #if TEST_NUM == 166
    VeryLongInt x;
    bool y;
    y = x >= string("1");
    assert (y || !y);
  #endif

  #if TEST_NUM == 167
    VeryLongInt x;
    bool y;
    y = "1" >= x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 168
    VeryLongInt x;
    bool y;
    y = string("1") >= x;
    assert (y || !y);
  #endif

  #if TEST_NUM == 169
    VeryLongInt h;
    int i = h;
  #endif

  #if TEST_NUM == 170
    VeryLongInt h;
    char i = h;
  #endif

  #if TEST_NUM == 171
    VeryLongInt h;
    string i = h;
  #endif

  //
  // Grupa testów 2**
  // Testy poprawności const
  //

  // Testy z grupy 2**, które powinny zakończyć się poprawnie.

  #if TEST_NUM == 201
    VeryLongInt const a;
    VeryLongInt b(a);
    VeryLongInt c = a;
    VeryLongInt d;
    d = a;
  #endif

  #if TEST_NUM == 202
    string const s("0");
    VeryLongInt a(s);
  #endif

  #if TEST_NUM == 203
    VeryLongInt x;
    VeryLongInt const y;
    x += y;
    x -= y;
    x *= y;
    x /= y;
    x %= y;
  #endif

  #if TEST_NUM == 204
    VeryLongInt const x;
    VeryLongInt const y;
    VeryLongInt z;
    z = x + y;
    z = x - y;
    z = x * y;
    z = x / y;
    z = x % y;
  #endif

  #if TEST_NUM == 205
    VeryLongInt const x;
    VeryLongInt y;
    y = x << 1;
    y = x >> 1;
  #endif

  #if TEST_NUM == 206
    VeryLongInt const x;
    VeryLongInt const y;
    bool z;
    z = x == y;
    z = x != y;
    z = x < y;
    z = x > y;
    z = x <= y;
    z = x >= y;
    assert(z || !z);
  #endif

  #if TEST_NUM == 207
    VeryLongInt const x;
    x.isValid();
    x.numberOfBinaryDigits();
    while(x);
  #endif

  #if TEST_NUM == 208
    VeryLongInt const x;
    ostringstream stream;
    stream << x;
  #endif

  // Testy z grupy 2**, które powinny zakończyć się błędem kompilacji.

  #if TEST_NUM == 209
    VeryLongInt x, y, z;
    x + y = z;
  #endif

  #if TEST_NUM == 210
    VeryLongInt x, y, z;
    x - y = z;
  #endif

  #if TEST_NUM == 211
    VeryLongInt x, y, z;
    x * y = z;
  #endif

  #if TEST_NUM == 212
    VeryLongInt x, y, z;
    x / y = z;
  #endif

  #if TEST_NUM == 213
    VeryLongInt x, y, z;
    x % y = z;
  #endif

  #if TEST_NUM == 214
    VeryLongInt x, y;
    x << 1 = y;
  #endif

  #if TEST_NUM == 215
    VeryLongInt x, y;
    x >> 1 = y;
  #endif

  //
  // Grupa testów 3**
  // Testy poprawności wykonywania operacji arytmetycznych
  //

  // Testy z grupy 3**, które powinny zakończyć się poprawnie.

  #if TEST_NUM == 301
    VeryLongInt z;
    VeryLongInt y(0);
    VeryLongInt x("0");
    VeryLongInt w(string("0"));
    assert(y == z);
    assert(x == z);
    assert(w == z);
  #endif

  #if TEST_NUM == 302
    VeryLongInt z = 1;
    VeryLongInt y(1);
    VeryLongInt x("1");
    VeryLongInt w(string("1"));
    assert(y == z);
    assert(x == z);
    assert(w == z);
  #endif

  #if TEST_NUM == 303
    VeryLongInt x(123456);
    VeryLongInt y(x);
    assert(x == y);
  #endif

  #if TEST_NUM == 304
    VeryLongInt x = 23;
    VeryLongInt y = x;
    assert(x == y);
  #endif

  #if TEST_NUM == 305
    VeryLongInt x = 23;
    VeryLongInt y = 32;
    x = y;
    assert(x == y);
  #endif

  #if TEST_NUM == 306
    VeryLongInt x("4294967295");
    assert(x == 0xFFFFFFFF);
  #endif

  #if TEST_NUM == 307
    VeryLongInt x("4294967296");
    assert(x == 0x100000000);
  #endif

  #if TEST_NUM == 308
    VeryLongInt x("18446744073709551615");
    assert(x == 0xFFFFFFFFFFFFFFFF);
  #endif

  #if TEST_NUM == 309
    VeryLongInt x(string("12345678"));
    VeryLongInt y(12345678);
    assert(x == y);
  #endif

  #if TEST_NUM == 310
    VeryLongInt x(string("12345678"));
    VeryLongInt y(12345678U);
    assert(x == y);
  #endif

  #if TEST_NUM == 311
    VeryLongInt x("12345678901234567890");
    VeryLongInt y(12345678901234567890UL);
    assert(x == y);
  #endif

  #if TEST_NUM == 312
    VeryLongInt x("12345678901234567890");
    VeryLongInt y(12345678901234567890ULL);
    assert(x == y);
  #endif

  #if TEST_NUM == 313
    VeryLongInt x("1234567890123456789");
    VeryLongInt y(1234567890123456789L);
    assert(x == y);
    #endif

  #if TEST_NUM == 314
    VeryLongInt x("1234567890123456789");
    VeryLongInt y(1234567890123456789LL);
    assert(x == y);
    #endif

  #if TEST_NUM == 315
    VeryLongInt x;
    if (x)
        assert(0);
    else
        assert(1);
  #endif

  #if TEST_NUM == 316
    VeryLongInt x(1);
    if (x)
        assert(1);
    else
        assert(0);
  #endif

  #if TEST_NUM == 317
    VeryLongInt x(1);
    x = 1 + x;
    assert(x == 2);
  #endif

  #if TEST_NUM == 318
    VeryLongInt x(1);
    x = 2 * x;
    assert(x == 2);
  #endif

  #if TEST_NUM == 319
    VeryLongInt x(2);
    x = 4 / x;
    assert(x == 2);
  #endif

  #if TEST_NUM == 320
    VeryLongInt x(3);
    x = 5 % x;
    assert(x == 2);
  #endif

  #if TEST_NUM == 321
    VeryLongInt x(0xFFFFFFFF);
    VeryLongInt y = x;
    x += 1;
    assert(x.numberOfBinaryDigits() == 33);
    x -= 1;
    assert(x.numberOfBinaryDigits() == 32);
    assert(x == y);
  #endif

  #if TEST_NUM == 322
    VeryLongInt x(0xFFFFFFFFFFFFFFFF);
    VeryLongInt y = x;
    x += 1;
    assert(x.numberOfBinaryDigits() == 65);
    x -= 1;
    assert(x.numberOfBinaryDigits() == 64);
    assert(x == y);
  #endif

  #if TEST_NUM == 323
    VeryLongInt x(0xFFFFFFFF);
    VeryLongInt y = x;
    x *= 2;
    assert(x.numberOfBinaryDigits() == 33);
    x /= 2;
    assert(x.numberOfBinaryDigits() == 32);
    assert(x == y);
  #endif

  #if TEST_NUM == 324
    VeryLongInt x(0xFFFFFFFFFFFFFFFF);
    VeryLongInt y = x;
    x *= 2;
    assert(x.numberOfBinaryDigits() == 65);
    x /= 2;
    assert(x.numberOfBinaryDigits() == 64);
    assert(x == y);
  #endif

  #if TEST_NUM == 325
    VeryLongInt x(0xFFFFFFFF);
    VeryLongInt y = x;
    x = x + 1;
    assert(x.numberOfBinaryDigits() == 33);
    x = x - 1;
    assert(x.numberOfBinaryDigits() == 32);
    assert(x == y);
  #endif

  #if TEST_NUM == 326
    VeryLongInt x(0xFFFFFFFFFFFFFFFF);
    VeryLongInt y = x;
    x = x + 1;
    assert(x.numberOfBinaryDigits() == 65);
    x = x - 1;
    assert(x.numberOfBinaryDigits() == 64);
    assert(x == y);
  #endif

  #if TEST_NUM == 327
    VeryLongInt x(0xFFFFFFFFFFFFFFFF);
    VeryLongInt y = x;
    x = x * 2;
    assert(x.numberOfBinaryDigits() == 65);
    x = x / 2;
    assert(x.numberOfBinaryDigits() == 64);
    assert(x == y);
  #endif

  #if TEST_NUM == 328
    VeryLongInt x("1234567890123456789012345678901234567890");
    VeryLongInt z = x;
    VeryLongInt y("777777777777777777777777777777777777777");
    x = x + y;
    x -= y;
    assert(x == z);
  #endif

  #if TEST_NUM == 329
    VeryLongInt x("1234567890123456789012345678901234567890");
    VeryLongInt y("1204567890123456789012345678901234567890");
    VeryLongInt z(  "30000000000000000000000000000000000000");
    assert(z == x - y);
  #endif

  #if TEST_NUM == 330
    VeryLongInt x("1234567890123456789012345678901234567890");
    VeryLongInt y(   "4000000000000000000000000000000000000");
    VeryLongInt z("1230567890123456789012345678901234567890");
    assert(z == x - y);
  #endif

  #if TEST_NUM == 331
    VeryLongInt x("1234567890123456789012345678901234567891");
    VeryLongInt y("1234567890123456789012345678901234567890");
    x -= y;
    assert(x == 1);
  #endif

  #if TEST_NUM == 332
     VeryLongInt x("1234567890123456789012345678901234567891");
     x -= x;
     assert(x == 0);
  #endif

  #if TEST_NUM == 333
    VeryLongInt x("10000000000");
    VeryLongInt y("100000000000");
    VeryLongInt z("1000000000000000000000");
    assert(z == x * y);
  #endif

  #if TEST_NUM == 334
    VeryLongInt x;
    x *= x;
    assert(x == 0);
    x *= 1;
    assert(x == 0);
  #endif

  #if TEST_NUM == 335
    VeryLongInt x(1);
    x *= 0;
    assert(x == 0);
  #endif

  #if TEST_NUM == 336
    VeryLongInt x(1);
    x *= x;
    assert(x == 1);
  #endif

  #if TEST_NUM == 337
    VeryLongInt x("987654321987654321");
    assert(x >> 0 == x);
  #endif

  #if TEST_NUM == 338
    VeryLongInt x(1);
    x <<= 32;
    x >>= 32;
    assert(x == 1);
  #endif

  #if TEST_NUM == 339
    VeryLongInt x(1);
    x <<= 64;
    x >>= 64;
    assert(x == 1);
  #endif

  #if TEST_NUM == 340
    VeryLongInt x(1);
    x %= 10U;
    assert(x == 1);
  #endif

  #if TEST_NUM == 341
    VeryLongInt x;
    x /= 10U;
    assert(x == 0);
  #endif

  #if TEST_NUM == 342
    VeryLongInt x;
    x %= 10U;
    assert(x == 0);
  #endif

  #if TEST_NUM == 343
    VeryLongInt x(8);
    x /= 10U;
    assert(x == 0);
  #endif

  #if TEST_NUM == 344
    VeryLongInt x("1234567890123456789");
    VeryLongInt y("123456789012345678");
    x /= 10U;
    assert(x == y);
  #endif

  #if TEST_NUM == 345
    VeryLongInt x;
    x <<= 111;
    assert(x == 0);
    assert(x << 7 == 0);
  #endif

  #if TEST_NUM == 346
    VeryLongInt x("987654321987654321");
    assert(x << 0 == x);
  #endif

  #if TEST_NUM == 347
    VeryLongInt x("987654321987654321");
    assert(x >> 100 == 0);
  #endif

  #if TEST_NUM == 348
    VeryLongInt x = 1;
    VeryLongInt y("6739986666787659948666753771754907668409286105635143120275902562304");
    x <<= 222;
    assert(x == y);
  #endif

  #if TEST_NUM == 349
    VeryLongInt x(1);
    VeryLongInt y(2147483648U);
    VeryLongInt z(4294967296UL);
    assert(y == x << 31);
    assert(z == x << 32);
  #endif

  #if TEST_NUM == 350
    VeryLongInt x(1);
    VeryLongInt y(2147483648U);
    VeryLongInt z(4294967296UL);
    assert(x == y >> 31);
    assert(x == z >> 32);
  #endif

  #if TEST_NUM == 351
    VeryLongInt x("328972398742398742398743298734298734298723498734298723489742398723498734298734298723498723498732984794586");
    VeryLongInt y = x;
    x <<= 20000;
    x >>= 20000;
    assert(x == y);
  #endif

  #if TEST_NUM == 352
    VeryLongInt x("328972398742398742398743298734298734298723498734298723489742398723498734298734298723498723498732984794586");
    VeryLongInt y("483244239084230983498230983420983240984309834209804329823409843209843209843209843209843209824309843209843");
    VeryLongInt x1 = x;
    VeryLongInt y1 = y;
    y <<= 2127;
    x += y * y;
    x = x - y * y;
    y >>= 2127;
    assert(x == x1);
    assert(y == y1);
  #endif

  #if TEST_NUM == 353
    VeryLongInt x = 1;
    VeryLongInt y = 1;
    VeryLongInt z = x + 7878U + y - x - 7878L - y;
    assert(z == 0);
  #endif

  #if TEST_NUM == 354
    VeryLongInt x = 123456;
    VeryLongInt y = 654321;
    VeryLongInt z = x * (y + 1) - y * x;
    assert(z == x);
  #endif

  #if TEST_NUM == 355
    VeryLongInt x("1212187313128973173182973219873219872319872319871238971239871329813278912379831279831279873129187239812379812379873219817329837129827398132798713298732198132798173298132798132793223198712389712398713298132789123798312798312798731291872398123798123798732198173298371298273981327987132987321981327981732981327981327932817912387983217912387983217982317932187912387923187123987912387912387321987198723198732987231987321987321987231987321897132897231987312");
    VeryLongInt y("874239798423798423798342794897423979482378942378947238973428974239874239873429874239873429873429873429873429865349756498784237982346896487548938094629570958209540909537905205920950925985734986543865");
    VeryLongInt z = x;
    x += y * y * y;
    x -= y * y * y;
    assert(x == z);
  #endif

  #if TEST_NUM == 356
    VeryLongInt x(0x100000000);
    assert(x > 0xFFFFFFFF);
    assert(x >= 0xFFFFFFFF);
    assert(!(x <= 0xFFFFFFFF));
    assert(x != 0xFFFFFFFF);
    assert(!(x < 0xFFFFFFFF));
  #endif

  #if TEST_NUM == 357
    VeryLongInt x(0x100000000);
    VeryLongInt y(0xFFFFFFFF);
    assert(x > y);
    assert(x >= y);
    assert(!(x <= y));
    assert(x != y);
    assert(!(x < y));
  #endif

  #if TEST_NUM == 358
    VeryLongInt y(0xFFFFFFFFFFFFFFFF);
    VeryLongInt x = y + 1;
    assert(x > y);
    assert(x >= y);
    assert(!(x <= y));
    assert(x != y);
    assert(!(x < y));
  #endif

  #if TEST_NUM == 359
    VeryLongInt y(0xFFFFFFFFFFFFFFFF);
    VeryLongInt x = y + 1;
    assert(x > 0xFFFFFFFFFFFFFFFF);
    assert(x >= 0xFFFFFFFFFFFFFFFF);
    assert(!(x <= 0xFFFFFFFFFFFFFFFF));
    assert(x != y);
    assert(!(x < 0xFFFFFFFFFFFFFFFF));
  #endif

  #if TEST_NUM == 360
    VeryLongInt x(23);
    VeryLongInt y(32);
    assert(y > x);
    assert(y > 31);
  #endif

  #if TEST_NUM == 361
    VeryLongInt x(23);
    VeryLongInt y = x;
    assert(y >= x);
    assert(y >= 23);
  #endif

  #if TEST_NUM == 362
    VeryLongInt x(55);
    x <<= 1234;
    VeryLongInt y = x - 1;
    assert(y < x);
    assert(y <= x);
    assert(y != x);
    assert(!(y > x));
    assert(!(y >= x));
    assert(!(y == x));
    y += 1;
    assert(y == x);
    assert(y >= x);
    assert(y <= x);
    assert(!(y != x));
    assert(!(y > x));
    assert(!(y < x));
  #endif

  #if TEST_NUM == 363
    VeryLongInt x("4497489274892491289184823752841090748478464724627647462374623746237");
    VeryLongInt y("4497489274892491289184823752841090748478464724627647462374623746236");
    x %= y;
    assert(x == 1);
  #endif

  //
  // Grupa testów 4**
  // Testy wydajności wykonywania operacji arytmetycznych
  //

  // Testy z grupy 4**, które powinny zakończyć się poprawnie.

  #if TEST_NUM == 401
    const int N = 10000;
    VeryLongInt x(1);
    VeryLongInt y(1);
    for (int i = 1; i <= N; ++i)
      x += x;
    for (int i = 1; i <= N; ++i)
      y *= 2;
    assert(x == y);
  #endif

  #if TEST_NUM == 402
    const unsigned N = 1000;
    VeryLongInt x(1);
    for (unsigned i = 1; i <= N; ++i) {
      x *= 2;
      assert(x.numberOfBinaryDigits() == i + 1);
    }
    for (unsigned i = N; i >= 1; --i) {
      x /= 2;
      assert(x.numberOfBinaryDigits() == i);
    }
    assert(x == 1);
  #endif

  #if TEST_NUM == 403
    const int N = 1000;
    VeryLongInt x(1);
    for (int i = 1; i <= N; ++i) {
      x <<= 1;
      assert(x % 3 == 2);
      x <<= 1;
      assert(x % 3 == 1);
    }
  #endif

  #if TEST_NUM == 404
    const unsigned N = 10000;
    VeryLongInt x(1);
    for (unsigned i = 1; i <= N; ++i) {
      x <<= 1;
      assert(x.numberOfBinaryDigits() == i + 1);
    }
    for (unsigned i = N; i >= 1; --i) {
      x >>= 1;
      assert(x.numberOfBinaryDigits() == i);
    }
  #endif

  #if TEST_NUM == 405
    const unsigned N = 10000;
    VeryLongInt x(1);
    VeryLongInt y(1);
    for (unsigned i = 1; i <= N; ++i)
      x = x + x;
    for (unsigned i = 1; i <= N; ++i)
      y = 2 * y;
    assert(x == y);
  #endif

  #if TEST_NUM == 406
    const unsigned N = 1000;
    VeryLongInt x(1);
    for (unsigned i = 1; i <= N; ++i) {
      x = 2 * x;
      assert(x.numberOfBinaryDigits() == i + 1);
    }
    for (unsigned i = N; i >= 1; --i) {
      x = x / 2;
      assert(x.numberOfBinaryDigits() == i);
    }
    assert(x == 1);
  #endif

  #if TEST_NUM == 407
    const unsigned N = 1000;
    VeryLongInt x(1);
    for (unsigned i = 1; i <= N; ++i) {
      x = x << 1;
      assert(x % 3 == 2);
      x = x << 1;
      assert(x % 3 == 1);
    }
  #endif

  #if TEST_NUM == 408
    const unsigned N = 10000;
    VeryLongInt x(1);
    for (unsigned i = 1; i <= N; ++i) {
      x = x << 1;
      assert(x.numberOfBinaryDigits() == i + 1);
    }
    for (unsigned i = N; i >= 1; --i) {
      x = x >> 1;
      assert(x.numberOfBinaryDigits() == i);
    }
  #endif

  #if TEST_NUM == 409
    const int N = 10000;
    VeryLongInt x = 1;
    for (int i = 1; i <= N; ++i)
      x *= 2;
    assert(x % 3 == 1);
  #endif

  #if TEST_NUM == 410
    const int N = 5000;
    VeryLongInt x(1);
    VeryLongInt y(1);
    for (int i = 1; i <= N; ++i)
      x *= i;
    for (int i = 1; i <= N; ++i)
      y = y * i;
    assert(x == y);
  #endif

  #if TEST_NUM == 411
    const int N = 10000;
    VeryLongInt x(1);
    for (int i = 1; i <= N; ++i)
      x += i;
    for (int i = 1; i <= N; ++i)
      x -= i;
    assert(x == 1);
  #endif

  #if TEST_NUM == 412
    const int N = 100000;
    VeryLongInt x;
    VeryLongInt y("43074374094839084239849482904382039428432908340982340983092842309823409823409283420938048209804239820394890");
    VeryLongInt z = N;
    for (int i = 1; i <= N; ++i)
      x = x + y;
    assert(x == y * N);
  #endif

  #if TEST_NUM == 413
    const int N = 500;
    VeryLongInt x = 1;
    for (int i = 1; i <= N; ++i)
      x *= 12345;
    for (int i = 1; i < N; ++i)
      x = x / 12345;
    assert(x == 12345);
  #endif

  #if TEST_NUM == 414
    const int N = 1000;
    VeryLongInt x(1);
    for (int i = 2; i <= N; ++i)
      x *= i;
    for (int i = 2; i <= N; ++i)
      x /= i;
    assert(x == 1);
  #endif

  #if TEST_NUM == 415
    const int N = 1000;
    for (int n = 1; n <= N; ++n) {
      VeryLongInt x(1);
      for (int i = 1; i <= n; ++i) {
        x *= 2;
      }
      VeryLongInt y = 1;
      y = y << n;
      assert(x == y);
    }
  #endif

  #if TEST_NUM == 416
    const int N = 1000;
    for (int n = 1; n <= N; ++n) {
      VeryLongInt x(1);
      for (int i = 1; i <= n; ++i) {
        x *= 2;
      }
      x = x >> n;
      assert(x == 1);
    }
  #endif

  #if TEST_NUM == 417
    const int N = 1000;
    for (int n = 1; n <= N; ++n) {
      VeryLongInt x(1);
      x <<= n;
      for (int i = 1; i < n; ++i)
        x /= 2;
      assert(x == 2);
    }
  #endif

  #if TEST_NUM == 418
    const int N = 100;
    const int M = 1000;
    VeryLongInt x = 1;
    VeryLongInt y("93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000");
    for (int i = 2; i <= N; ++i)
      x *= i;
    assert(x == y);
    VeryLongInt z("402387260077093773543702433923003985719374864210714632543799910429938512398629020592044208486969404800479988610197196058631666872994808558901323829669944590997424504087073759918823627727188732519779505950995276120874975462497043601418278094646496291056393887437886487337119181045825783647849977012476632889835955735432513185323958463075557409114262417474349347553428646576611667797396668820291207379143853719588249808126867838374559731746136085379534524221586593201928090878297308431392844403281231558611036976801357304216168747609675871348312025478589320767169132448426236131412508780208000261683151027341827977704784635868170164365024153691398281264810213092761244896359928705114964975419909342221566832572080821333186116811553615836546984046708975602900950537616475847728421889679646244945160765353408198901385442487984959953319101723355556602139450399736280750137837615307127761926849034352625200015888535147331611702103968175921510907788019393178114194545257223865541461062892187960223838971476088506276862967146674697562911234082439208160153780889893964518263243671616762179168909779911903754031274622289988005195444414282012187361745992642956581746628302955570299024324153181617210465832036786906117260158783520751516284225540265170483304226143974286933061690897968482590125458327168226458066526769958652682272807075781391858178889652208164348344825993266043367660176999612831860788386150279465955131156552036093988180612138558600301435694527224206344631797460594682573103790084024432438465657245014402821885252470935190620929023136493273497565513958720559654228749774011413346962715422845862377387538230483865688976461927383814900140767310446640259899490222221765904339901886018566526485061799702356193897017860040811889729918311021171229845901641921068884387121855646124960798722908519296819372388642614839657382291123125024186649353143970137428531926649875337218940694281434118520158014123344828015051399694290153483077644569099073152433278288269864602789864321139083506217095002597389863554277196742822248757586765752344220207573630569498825087968928162753848863396909959826280956121450994871701244516461260379029309120889086942028510640182154399457156805941872748998094254742173582401063677404595741785160829230135358081840096996372524230560855903700624271243416909004153690105933983835777939410970027753472000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    for (int i = N + 1; i <= M; ++i)
      x *= i;
    assert(x == z);
  #endif

  //
  // Grupa testów 5**
  // Testy nieliczb oraz funkcji Zero(), NaN(), isValid()
  //

  // Testy z grupy 5**, które powinny zakończyć się poprawnie.
  #if TEST_NUM == 501
    if (Zero())
      assert(0);
    else
      assert(1);
  #endif

  #if TEST_NUM == 502
    if (NaN())
      assert(0);
    else
      assert(1);
  #endif

  #if TEST_NUM == 503
    assert(Zero().isValid());
  #endif

  #if TEST_NUM == 504
    assert(!NaN().isValid());
  #endif

  #if TEST_NUM == 505
    VeryLongInt x(1);
    x /= 0;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 506
    VeryLongInt x(1);
    x %= 0;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 507
    VeryLongInt x = 100;
    x -= 101;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 508
    VeryLongInt x("1234567890123456789012345678901234567890");
    VeryLongInt y("1234567890123456789012345678901234567891");
    x -= y;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 509
    VeryLongInt x;
    x += NaN();
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 510
    VeryLongInt x;
    x -= NaN();
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 511
    VeryLongInt x;
    x *= NaN();
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 512
    VeryLongInt x;
    x /= NaN();
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 513
    VeryLongInt x;
    x %= NaN();
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 514
    VeryLongInt x;
    x = NaN();
    x <<= 1;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 515
    VeryLongInt x;
    x = NaN();
    x >>= 1;
    assert(!x.isValid());
  #endif

  #if TEST_NUM == 516
    VeryLongInt x;
    VeryLongInt y = NaN();
    assert(!(x + y).isValid());
    assert(!(x - y).isValid());
    assert(!(x * y).isValid());
    assert(!(x / y).isValid());
    assert(!(x % y).isValid());
  #endif

  #if TEST_NUM == 517
    VeryLongInt x = 1;
    VeryLongInt y = NaN();
    assert(!(x + y).isValid());
    assert(!(x - y).isValid());
    assert(!(x * y).isValid());
    assert(!(x / y).isValid());
    assert(!(x % y).isValid());
  #endif

  #if TEST_NUM == 518
    VeryLongInt x = NaN();
    VeryLongInt y;
    assert(!(x + y).isValid());
    assert(!(x - y).isValid());
    assert(!(x * y).isValid());
    assert(!(x / y).isValid());
    assert(!(x % y).isValid());
  #endif

  #if TEST_NUM == 519
    VeryLongInt x = NaN();
    VeryLongInt y = 1;
    assert(!(x + y).isValid());
    assert(!(x - y).isValid());
    assert(!(x * y).isValid());
    assert(!(x / y).isValid());
    assert(!(x % y).isValid());
  #endif

  #if TEST_NUM == 520
    VeryLongInt x = NaN();
    assert(!(x << 1).isValid());
    assert(!(x >> 1).isValid());
  #endif

  #if TEST_NUM == 521
    VeryLongInt x = NaN();
    assert(!(x << 0).isValid());
    assert(!(x >> 0).isValid());
  #endif

  #if TEST_NUM == 522
    assert(Zero().numberOfBinaryDigits() == 1);
    assert(NaN().numberOfBinaryDigits() == 0);
  #endif

  #if TEST_NUM == 523
    VeryLongInt x(1);
    x /= 0;
    assert(!(x == 1));
    assert(!(x != 1));
    assert(!(x >= 1));
    assert(!(x <= 1));
    assert(!(x > 1));
    assert(!(x < 1));
    assert(!(0 == x));
    assert(!(0 != x));
    assert(!(0 >= x));
    assert(!(0 <= x));
    assert(!(0 > x));
    assert(!(0 < x));
  #endif

  // Testy z grupy 5**, które powinny zakończyć się błędem kompilacji.
  #if TEST_NUM == 524
    Zero() = 0;
  #endif

  #if TEST_NUM == 525
    Zero() += 1;
  #endif

  #if TEST_NUM == 526
    Zero() -= 1;
  #endif

  #if TEST_NUM == 527
    Zero() *= 1;
  #endif

  #if TEST_NUM == 528
    Zero() /= 1;
  #endif

  #if TEST_NUM == 529
    Zero() %= 1;
  #endif

  #if TEST_NUM == 530
    Zero() <<= 1;
  #endif

  #if TEST_NUM == 531
    Zero() >>= 1;
  #endif

  #if TEST_NUM == 532
    NaN() = 0;
  #endif

  #if TEST_NUM == 533
    NaN() += 1;
  #endif

  #if TEST_NUM == 534
    NaN() -= 1;
  #endif

  #if TEST_NUM == 535
    NaN() *= 1;
  #endif

  #if TEST_NUM == 536
    NaN() /= 1;
  #endif

  #if TEST_NUM == 537
    NaN() %= 1;
  #endif

  #if TEST_NUM == 538
    NaN() <<= 1;
  #endif

  #if TEST_NUM == 539
    NaN() >>= 1;
  #endif

  //
  // Grupa testów 6**
  // Testy obsługi strumieni
  //

  #if TEST_NUM == 601
    string s = "12313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237123132897213897312893218973218971238971238971238927391237981237981237918237123897123987231987123982371231328972138973128932189732189712389712389712389273912379812379812379182371238971239872319871239823712313289721389731289321897321897123897123897123892739123798123798123791823712389712398723198712398237";
    VeryLongInt x(s);
    ostringstream stream;
    stream << x;
    string str = stream.str();
    assert(s == str);
  #endif

  #if TEST_NUM == 602
    ostringstream stream;
    stream << NaN();
    string str = stream.str();
    assert(str == "NaN");
  #endif

  #if TEST_NUM == 603
    ostringstream stream;
    stream << Zero();
    std::string str = stream.str();
    assert(str == "0");
  #endif

  #if TEST_NUM == 604
    VeryLongInt x(1);
    ostringstream stream;
    stream << x;
    string str = stream.str();
    assert(str == "1");
  #endif

  #if TEST_NUM == 605
    VeryLongInt x(10000000000UL);
    ostringstream stream;
    stream << x;
    string str = stream.str();
    assert(str == "10000000000");
  #endif
}
