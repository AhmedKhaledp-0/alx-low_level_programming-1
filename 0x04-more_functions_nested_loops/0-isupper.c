#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: character checked
 *
 * Return: i either 1 (uppercase letter) or 0 (not)
 */
int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
