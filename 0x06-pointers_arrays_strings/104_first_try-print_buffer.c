#include "main.h"

/**
 * print_buffer - a function that prints a buffer.
 * @b: the buffer
 * @size: number of bytes of the buffer pointed by b
 * Description:  prints 10 bytes per line
 * On Each line:
 * - starts with the position of the first byte of the line in hexadecimal
 *   (8 chars), starting with 0
 * - shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time
 *   , separated by a space
 * - shows the content of the buffer. If the byte is a printable character,
 *   print the letter, if not, print .
 * - ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 */

void print_buffer(char *b, int size)
{
	int i, j, l, s;
	char c[10];

	l = size / 10;		
	if (size > l * 10)
		l++;
	if (size <= 0)
		printf("\n");
	for (i = 0; i < l && size > 0; i++)
	{
		s = i * 10;
		for (j = 0; j < 10; j++)
		{
			if (b[s] < 32)
				b[s] = '.';
				c[j] = b[s];
				s++;
		}

		printf("%08x", i * 10);

		for (j = 0; j < 10; j++)
		{
			if (j % 2 == 0)
			{
				printf(" ");				
			}

			if (size - 1 < (i * 10) + j)
				printf("  ");
			else
				printf("%02x", c[j]);
		}
		
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (size - 1 < (i * 10) + j)
				printf("  ");
			else
				printf("%c", c[j]);
			if (j % 10 == 9)
				printf("\n");
		}
	}
	printf("\n");
}
