#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number
 */

void print_number(int n)
{
	unsigned int _n;
	/* char num = "0123456789"; */

	if (n < 0)
	{
		_n = -n;
		_putchar('-');
	}

	else
	{
		_n = n;
	}

	if (_n >= 10)
	{
		print_number(_n / 10);
	}

	_putchar('0' + (_n % 10));
}
