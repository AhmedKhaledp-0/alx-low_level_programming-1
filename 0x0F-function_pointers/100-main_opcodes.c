#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the opcodes of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	int (*ptr)(int, char **) = main;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2x", ptr[i] & 0xFF);

		if (i == bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
