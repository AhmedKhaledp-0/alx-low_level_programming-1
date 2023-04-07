#include "main.h"

/**
 * print_binary - Prints the binary representation of decimal numbers.
 * @n: Prints in binary.
 */
void print_binary(unsigned long int n)
{
	int val = 1;

	if (n > val)
	{
		print_binary(n >> val);
	}

	_putchar((n & val) + '0');
}