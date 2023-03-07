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

/**
 * check - if it is a palindrome
 * @s: the string
 * @i: loop check forward
 * @len: loop check backward
 *
 * Return: 1 if it is a palindrome otherwise 0
 */

int check(char *s, int i, int len)
{
	int l;

	l = _strlen_recursion(s);

	if (s[i] != s[len])
		return (0);
	if (s[i] == s[len])
	{
		if (l / 2 == (i + 1))
			return (1);
		else
			return (check(s, i + 1, len - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: the string
 *
 * Return: answer
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s) - 1;

	return (check(s, 0, len));
}
