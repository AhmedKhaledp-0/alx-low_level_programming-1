#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string
 *
 * Return: the length of the  string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l += _strlen_recursion(s + 1) + 1;
	}
	return (l);
}
