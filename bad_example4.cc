#include "very_long_int.h"
#include <string>

int main() {
    VeryLongInt d;
    d -= ::std::string("123"); // błąd kompilacji
    return 0;
}