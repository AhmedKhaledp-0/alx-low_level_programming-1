#include "main.h"

/**
 * strtow - a function that splits a string into words.
 * @str: string
 *
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **strw;
	int i = 0, j, p = 0, l, n;

	if (str == NULL || *str == '\0')
		return (NULL);

	l = strlen(str);
	strw = malloc(l * sizeof(char *));
	if (strw == NULL)
	{
		free(strw);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			j = 1;
			while (str[i + j] != ' ')
				j++;
			strw[p] = malloc(j * sizeof(char));
			if (strw[p] == NULL)
			{
				while (p--)
					free(strw[p]);
				free(strw);
				return (NULL);
			}
			for (n = 0; n < j; n++)
				strw[p][n] = str[i + n];
			strw[p][n] = '\0';
			p++;
			i += j;
		}
		else
			i++;
	}
	strw[p] = NULL;
	return (strw);
}
