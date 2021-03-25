#include "src.h"
#include <assert.h>

#undef main

int main(){
    assert(14 == res(5, 0.1));
    assert(28 == res(15, 0.00001));
    return 0;
}