#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * Input:	ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
 * Output:	NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm
 * and vice-versa
 *
 * @s: string
 * Return: Rot13 s string
 */

char *rot13(char *s)
{
	int i, n;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		while (n < 52)
		{
			if (s[i] == input[n])
			{
				s[i] = output[n];
				break;
			}

			n++;
		}
	}
	return (s);
}
