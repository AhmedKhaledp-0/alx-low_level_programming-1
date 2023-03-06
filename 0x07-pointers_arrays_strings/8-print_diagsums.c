#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: Two dimensional array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0;

	j = 0;
	for (i = 0; i < size; i++)
	{
		sum_1 += a[(size * i) + i];
	}

	for (j = 1; j < size + 1; j++)
	{
		sum_2 += a[(size * j) - j];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
