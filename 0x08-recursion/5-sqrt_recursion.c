#include "main.h"

/**
 * _sqrt - finds the square rootof a numbe
 * @n: the number
 * @l: loop
 *
 * Return: the square root
 */

int _sqrt(int n, int l)
{
	if (l * l == n)
		return (l);
	if (l * l != n && l < n)
		return (_sqrt(n, l + 1));
	return (-1);
}

/**
 * _sqrt_recursion - a function that returns the natural square root of anumber
 * @n: the number
 *
 * Return: sqaure root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n > 1)
		return (_sqrt(n, 2));
	return (-1);
}
