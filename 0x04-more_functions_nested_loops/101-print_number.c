#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: The number
 */

void print_number(int n)
{
	unsigned int _n;

	if (n < 0)
	{
		_n = -n;
		_putchar('-');
	}
	else
		_n = n;


	if (_n >= 10)
	{
		print_number(_n / 10);
	}

	_putchar('0' + (_n % 10));
}
