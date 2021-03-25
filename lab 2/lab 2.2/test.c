#include "src.h"
#include <assert.h>

#undef main

int main(){
    assert(7 == res(5, 0.1));
    assert(24 == res(15, 0.00001));
    return 0;
}