#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "src.h"

int main()
{
	FILE* arithmeticOperations = fopen("arithmeticOperations.txt", "r");
	FILE* variableValues = fopen("variableValues.txt", "r");
	if (arithmeticOperations == NULL || variableValues == NULL)
	{
		printf("\nFile is not found!\n");
		return 0;
	}
    int i;
	double** vals = (double**)calloc(100, sizeof(double*));    /*Массив значений*/
	if (vals == NULL)
	{
		printf("\nNot enough memory!");
		return 0;
	}
	for (i = 0; i < 100; ++i)
	{
		vals[i] = (double*)calloc(100, sizeof(double));
		if (vals[i] == NULL)
		{
			printf("\nNot enough memory!");
			return 0;
		}
	}

	int row = 0;
	while (!feof(variableValues))
	{
		char s[100];
		int col = 0;
		fgets(s, 30, variableValues);
		for (i = 0; s[i] != '\n'; ++i)
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == ',') continue;
			if (s[i] == '.' || s[i] == '-' || (s[i] >= '0' && s[i] <= '9'))
			{
				char* box = (char*)calloc(100, sizeof(char));
				int len = 0;
				while (s[i] == '.' || s[i] == '-' || (s[i] >= '0' && s[i] <= '9'))
				{
					box[len++] = s[i];
					++i;
				}
				vals[row][++col] = stod(box);
			}
			if (s[i] == '\n')
				i--;
		}
		vals[row][0] = col;               /*vals[row][0] хранит количество чисел в строке*/
		row++;
	}
	int rows = row--;


	row = 0;
	while (!feof(arithmeticOperations) && row < rows)
	{
		char s[100];
		int col = 0;
		double result = 0;
		result = vals[row][++col];
		printf("\n");
		printf("%.2f ", vals[row][col]);
		fgets(s, 30, arithmeticOperations);
		for (i = 0; s[i] != '\n'; ++i)
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == ',') continue;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				++i;
				if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%')
				{
					printf("%c ", s[i]);
					switch (s[i])
					{
					case '+':
						result += vals[row][++col];
						printf("%.2f ", vals[row][col]);
						break;
					case '-':
						result -= vals[row][++col];
						printf("%.2f ", vals[row][col]);
						break;
					case '*':
						result *= vals[row][++col];
						printf("%.2f ", vals[row][col]);
						break;
					case '/':
						result /= vals[row][++col];
						printf("%.2f ", vals[row][col]);
						break;
					case '%':
						result = fmod(result, vals[row][++col]);
						printf("%.2f ", vals[row][col]);
						break;
					}
				}
				else
				{
					if (s[i] == '\n')
					{
						printf("= %.2f", result);
						row++;
						i--;
					}
				}
			}
		}
	}
	printf("\n");

	for (i = 0; i < rows; ++i){
		free(vals[i]);
	}
	free(vals);

	fclose(arithmeticOperations);
	fclose(variableValues);
	return 0;
}