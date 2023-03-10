#include <stdio.h>
/**
 * _isalpha - (int c)
 * @c: parameter checked
 *
 * Return: 0( success)
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
