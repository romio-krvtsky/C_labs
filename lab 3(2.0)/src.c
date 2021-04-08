#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "src.h"

void EnterAndCheckInput(int* a)
{
	while (!scanf("%d", &(*a)) || *a <= 0)
	{
		printf("Wrong input! Try again :)\n");
		while (getchar() != '\n');
		printf("Enter a number of array rows: ");
	}
	while (getchar() != '\n');
}

void FillArrayWithZerosAndOnes(int** a, int n, int m)
{
    int i,j;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("Enter an element: ");
			while (!scanf("%d", &a[i][j]) || !(a[i][j] == 1 || a[i][j] == 0))
			{
				printf("Array elements can only be 1 or 0. Try again!\n");
				while (getchar() != '\n');
				printf("Enter an element: ");
			}
			while (getchar() != '\n');
		}
        printf("\n");
}

void DeleteDuplicateRows(int** a, int n, int m)
{
	int duplicate = 1, duplicateMain = 0;
	int numberOfDuplicateRows = 0;
    int i,I,j;
	for (i = 0; i < n - 1; i++)
	{
		duplicateMain = 0;
		for (I = i + 1; I < n; I++)
		{
			duplicate = 1;
			for (j = 0; j < m; j++)
			{
				if (a[i][j] != a[I][j])
				{
					duplicate = 0;
				}
			}
			if (duplicate == 1)
			{
				a[I][0] = 3;     /*если строки совпали, заменяем первый элемент одной из этих строк на 3*/
				duplicateMain = 1;
			}
		}
		if (duplicateMain == 1)  /*Main - строка, с которой сравниваются последующие. Ее тоже удаляем*/
		{
			numberOfDuplicateRows++;
			a[i][0] = 3;
		}
	}
    int k;
	for (k = 0; k <= numberOfDuplicateRows; k++)
	{
		for (int i = 0; i < n; i++)  /*переписываем массив*/
		{
			if (a[i][0] == 3)
			{
				n--;
				for (j = i; j < n; j++)
					a[j] = a[j + 1];
				a[n] = NULL;
			}
		}
	}
}

void ChangeElementsOrder(int** a, int n, int m)
{
	int** temp = (int**)malloc(n * sizeof(int*));
    int i,j,k;
	for (i = 0; i < n; i++)
		temp[i] = (int*)malloc(1 * sizeof(int));

	for (i = 0; i < n; i++)
		temp[i][0] = 0;

	for (i = 0; i < n; i++)
		for (j = 0, k = m - 1; j < m; j++, k--)
			temp[i][0] += a[i][j] * (int)pow(10, k);

	for (i = 0; i < n - 1; i++)
	{
		for (k = i + 1; k < n; k++)
		{
			if (temp[i][0] > temp[k][0])
			{
				int buf = temp[i][0];
				temp[i][0] = temp[k][0];
				temp[k][0] = buf;
			}
		}
	}

	for (i = 0; i < n; i++)
		for (j = 0, k = m - 1; j < m; j++, k--)
		{
			int step = (int)pow(10, k);
			a[i][j] = temp[i][0] / step;
			temp[i][0] %= step;
		}

	for (i = 0; i < n; i++)
		free(temp[i]);
	free(temp);
}

void ShowArray(int** a, int n, int m)
{
    int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}