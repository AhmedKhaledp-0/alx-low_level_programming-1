#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src to
 * memory area dest
 * @n: the first n bytes to be filled
 * @dest: memory area
 * @src:array to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
