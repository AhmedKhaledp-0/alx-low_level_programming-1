#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * largest_prime - gets the largest prime number
 *
 * @num: number checked
 */
void largest_prime(long int num)
{
	int i, prime;

	/* To get all the least number that is not a multiple of 2 */
	/* Since any number divided by 2 is even */
	while (num % 2 == 0)
	{
		prime = 2;
		num /= 2;
	}

	/* n is now an odd number */
	/* square root of n is used so that we loop through all the */
	/* multiples that are not duplicate ie. 49 = 7 x 7 */
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
			prime = i;
		}
	}

	if (num > 2)
		prime = num;

	printf("%d", prime);
}

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	largest_prime(612852475143);
	printf("\n");

	return (0);
}
