#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integer
 * @a: array
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i, temp, rev;

	rev = n - 1;
	for (i = 0; i < rev; i++)
	{
		temp = a[i];

		a[i] = a[rev];
		a[rev] = temp;

		rev--;
	}
}
