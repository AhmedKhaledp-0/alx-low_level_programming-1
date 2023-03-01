#include "main.h"

/**
 * print_buffer - a function that prints a buffer.
 * @b: the buffer
 * @size: number of bytes of the buffer pointed by b
 *
 * Description:  prints 10 bytes per line
 * On Each line:
 * - starts with the position of the first byte of the line in hexadecimal
 *   (8 chars), starting with 0
 * - shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time
 *   , separated by a space
 * - shows the content of the buffer. If the byte is a printable character,
 *   print the letter, if not, print .
 * - ends with a new line \n
 *
 * If size is 0 or less, the output should be a new line only \n
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);

		for (j = i; j < i + 10; j++)
		{
			if (j % 2 == 0)
			{
				printf(" ");
			}
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
		}

		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (size <= j)
				break;
			if (b[j] < 32 || b[j] > 126)
			{
				b[j] = '.';
				printf("%c", b[j]);
			}
			else
				printf("%c", b[j]);
		}
		printf("\n");
	}
}
