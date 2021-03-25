#include <assert.h>
#include<math.h>
#include "src.h"

int main() {
    assert(11 == dec2bin(3));
    assert(1010 == dec2bin(10));
    assert(12 == dec2oct(10));
    assert(0.500000 == inversion(2));
    return 0;
}