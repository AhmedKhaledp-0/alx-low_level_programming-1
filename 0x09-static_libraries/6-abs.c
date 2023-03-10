#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: value to check
 * Return: 0 (success)
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = -(n);
		return (a);
	}
	else
	{
		return (n);
	}
}
