#include "main.h"

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * - The returned pointer should point to a newly allocated space in memory
 *   which contains the contents of s1, followed by the contents of s2, and
 *   null terminated
 * - if NULL is passed, treat it as an empty string
 * - The function should return NULL on failure
 *
 * Return: pointer to the new string array or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, l1, l2, len, s;
	char *ar;

	if (s1 == NULL)
		l1 = 0;
	else
		l1 = strlen(s1);

	if (s2 == NULL)
		l2 = 0;
	else
		l2 = strlen(s2);

	len = l1 + l2 + 1;
	ar = malloc(len);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (s1 == NULL || s1[i] == '\0')
			break;
		ar[i] = s1[i];
	}

	s = 0;
	for (; i < len; i++)
	{
		if (s2 == NULL)
			break;
		ar[i] = s2[s];
		s++;
	}
	return (ar);
}
