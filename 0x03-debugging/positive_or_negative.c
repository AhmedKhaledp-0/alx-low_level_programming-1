#include "main.h"
/**
 * positive_or_negative - check if number is positive or negative
 * @n: checked number
 *
 * Return: 0 (success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
