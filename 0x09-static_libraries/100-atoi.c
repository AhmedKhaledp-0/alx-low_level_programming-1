#include "main.h"
/**
 * _pow - To find the power of a number raised to another
 * @a: base
 * @b: power
 *
 * Return: returns the answer
 */

int _pow(int a, int b)
{
	int i, sol = 1;

	i = b - 1;
	while (i != 0)
	{
		sol = sol * a;
		i--;
	}
	return (sol);
}

/**
 * _atoi - a function that convert a string to an integer.
 * @s: character pointer variable
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	unsigned int i, sign, j, num, conv, sum;

	j = 0;
	sign = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= 48 && s[i] <= 57)
			j++;

		if (j > 0 && (*(s + i) < 48 || *(s + i) > 57))
			break;
	}


	sum = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			conv = (int)s[i] - 48;

			num = conv * _pow(10, j);
			sum += num;
			j--;
		}
	}
	return (sum * sign);
}
