#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: first string
 * @src: second string
 * @n: number of bytes from src to be added to dest
 *
 * Description: The function copies the at most n bytes from src
 * and replaces it starting fromthe first item in dest.
 * if the number of bytes is far more than the lenght of string src
 * it replaces the rest of the string with '\0' until it reaches n bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	while (i < n)
	{
		dest[i] = '\0';

		i++;
	}
	return (dest);
}
