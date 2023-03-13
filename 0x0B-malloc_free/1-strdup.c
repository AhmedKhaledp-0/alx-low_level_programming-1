#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 *
 * - The _strdup() function returns a pointer to a new string which is a
 *   duplicate of the string str. Memory for the new string is obtained
 *   with malloc, and can be freed with free.
 * - Returns NULL if str = NULL
 * - On success, the _strdup function returns a pointer to the duplicated
 *   string. It returns NULL if insufficient memory was available
 * Return: a pointer to duplicate string or NULL
 */

char *_strdup(char *str)
{
	char *ar;
	int i, l;

	if (str == NULL)
		return (NULL);

	l = strlen(str);
	ar = malloc(l + 1);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
