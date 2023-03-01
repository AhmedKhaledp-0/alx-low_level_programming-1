#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of character from src to be added to dest
 *
 * Description: The _strncat function is similar to the _strcat function,
 * except that:-
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	j = i;
	i = 0;
	while (i != n)
	{
		dest[j] = src[i];

		if (src[i] == '\0')
			break;
		j++;
		i++;
	}

	return (dest);
}
