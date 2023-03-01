#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: the string
 *
 * Return: s the encoded string
 */

char *leet(char *s)
{
	int i, n;
	char char_[] = "aAeEoOtTlL";
	char rep[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		while (char_[n] != '\0')
		{
			if (s[i] == char_[n])
			{
				s[i] = rep[n];
			}
			n++;
		}
	}

	return (s);
}
