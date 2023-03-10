#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * - Print the result, followed by a new line
 * - If no number is passed to the program, print 0, followed by a new line
 * - If one of the number contains symbols that are not digits, print Error,
 *   followed by a new line, and return 1
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int c, j, add = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (c = 1; c < argc; c++)
		{
			j = 0;

			while (argv[c][j])
			{
				if (!isdigit(argv[c][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			add = add + atoi(argv[c]);
		}

		if (add > 0)
			printf("%d\n", add);
	}

	return (0);
}
