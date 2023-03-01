#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: string
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?,
 * \", (, ), {, and }
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = "\t\n,;.!? \" (){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i] == sep[j])
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						s[i + 1] = s[i + 1] - 32;
					}
				}
			}
		}
	}

	return (s);
}
