<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "src.h"

int main()
{
    int** a;
    int n, m;
	printf("Enter a number of array rows: ");
	EnterAndCheckInput(&n);
	printf("Enter a number of array colomns: ");
	EnterAndCheckInput(&m);
    int i;
	a = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++)
		a[i] = (int*)malloc(m * sizeof(int));

	printf("Fill the array with elements - numbers 0 or 1:\n");
	FillArrayWithZerosAndOnes(a, n, m);

	printf("\nInitial array:\n");
	ShowArray(a, n, m);

	DeleteDuplicateRows(a, n, m);
	printf("\nThe array after deleting duplicate rows:\n");
	ShowArray(a, n, m);
	if (n == 0)
		printf("[Nothing to print]\n");

	ChangeElementsOrder(a, n, m);
	printf("\nThe array after sort:\n");
	ShowArray(a, n, m);
	if (n == 0)
		printf("[Still nothing to print]\n");

	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);

	return 0;
}
=======
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "src.h"

int main()
{
    int** a;
    int n, m;
	printf("Enter a number of array rows: ");
	EnterAndCheckInput(&n);
	printf("Enter a number of array colomns: ");
	EnterAndCheckInput(&m);
    int i;
	a = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++)
		a[i] = (int*)malloc(m * sizeof(int));

	printf("Fill the array with elements - numbers 0 or 1:\n");
	FillArrayWithZerosAndOnes(a, n, m);

	printf("\nInitial array:\n");
	ShowArray(a, n, m);

	DeleteDuplicateRows(a, n, m);
	printf("\nThe array after deleting duplicate rows:\n");
	ShowArray(a, n, m);
	if (n == 0)
		printf("[Nothing to print]\n");

	ChangeElementsOrder(a, n, m);
	printf("\nThe array after sort:\n");
	ShowArray(a, n, m);
	if (n == 0)
		printf("[Still nothing to print]\n");

	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);

	return 0;
}
>>>>>>> f37ec5c15471ddacff8cc8a5e7c560b6f888c6f3
