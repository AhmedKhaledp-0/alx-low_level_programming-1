#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: first string
 * @src: second string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 *
 * Return:  a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	j = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];

		j++;
		i++;
	}

	return (dest);
}
