#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * - All arguments should be printed, including the first one
 * - Only print one argument per line, ending with a new line
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
