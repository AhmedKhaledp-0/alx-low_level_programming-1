#include "main.h"

/**
 * main -  a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * - Your program should print the result of the multiplication,
 *   followed by a new line
 * - You can assume that the two numbers and result of the multiplication
 *   can be stored in an integer
 * - If the program does not receive two arguments, your program should
 *   print Error, followed by a new line, and return 1
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 2)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
