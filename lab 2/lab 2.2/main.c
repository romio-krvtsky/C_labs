#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "src.h"


int main() {
	double epsilon, x;
    printf("Enter x:");
	scanf("%lf", &x);
    printf("Enter epsilon:");
    scanf("%lf", &epsilon);
    printf("n=%d", res(x, epsilon));
	return 0;
}