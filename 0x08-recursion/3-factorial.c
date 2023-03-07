#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		fact *= n * factorial(n - 1);
	}
	return (fact);
}
