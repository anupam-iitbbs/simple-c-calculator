// test/test_calculator.c

#include "../calculator.h"
#include <assert.h>

int main() {
    assert(add(2, 3) == 5);
    assert(sub(5, 2) == 3);
    assert(mul(3, 4) == 12);
    assert(divide(10, 2) == 5);
    assert(divide(5, 0) == 0); // test divide by zero
    return 0;
}