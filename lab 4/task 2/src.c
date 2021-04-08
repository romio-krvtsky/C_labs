#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double stod(const char* s)
{
	int point = 0;
	double result = 0, fact = 1;
	if (*s == '-')
	{
		fact = -1;
		s++;
	}

	for (point; *s; s++)
	{
		if (*s == '.')
		{
			point = 1;
			continue;
		}

		int digit = *s - '0';
		if (digit >= 0 && digit <= 9)
		{
			if (point)
				fact /= 10;

			result = result * 10 + (double)digit;
		}
	}
	return result * fact;
}
