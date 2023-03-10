#include <stdio.h>
/**
 * _islower - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _islower(int c)
{
	int r;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
