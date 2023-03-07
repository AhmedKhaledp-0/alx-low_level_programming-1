#include "main.h"

/**
 * check - checks for prime numbers
 * @n: the number
 * @l: the loop
 *
 * Return: 1 if it is a prime number otherwise 0
 */

int check(int n, int l)
{
	if (n % l == 0 && l < n)
		return (0);
	return (1);
}

/**
 * is_prime_number - a function that returns 1 if the input integer is a prime
 * number, otherwise return 0.
 * @n: the number
 *
 * Return: the answer
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (check(n, 2));
}
