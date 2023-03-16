#include "main.h"
#include <ctype.h>

/**
 * mul - a program that multiplies two positive numbers.
 * @num1: first number, second argument
 * @l1: length of string 1
 * @l2: length of stirng 0
 * @num2: second number, third argument
 * 
 * Description
 * - num1 and num2 will be passed in base 10
 * - Print the result, followed by a new line
 */
void *mul(char *n1, int l1, char *n2, int l2)
{
	int i, multiply;
	char *sol;
	printf("%s, %s", n1, n2);

	(void) multiply;
	sol = malloc(l1 + l2 + 1);
	if (sol == NULL)
		return (NULL);

	for (i = 0; i < (l1 + l2 + 1); i++)
		sol[i] = '0';

	i = 0;
	while (i < l1)
	{
		multiply = n1[i] * n2[i];

	}

	return (sol);
}

/**
 * _isdigit - check for digit
 * @argv: argument vector
 *
 * Return: 0 when it is true and 1 if it is not
 */
int _isdigit(char **argv)
{
	int i, j, s;

	s = 0;
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s", argv[i]);
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	return (s);
}

/**
 * main - run program
 * @argc: argument count
 * @argv: argument vector
 *
 * - If the number of arguments is incorrect, print Error, followed by a new
 *   line, and exit with a status of 98
 * - num1 and num2 should only be composed of digits.
 *   If not, print Error, followed by a new line, and exit with a status of 98
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int l1, l2;
	printf("%d", argc);
       
	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);

	_isdigit(argv);

	(void) argc;
	/* if (!(argc == 3))
	{
		printf("Error\n");
		exit(98);
	} */

	mul(argv[1], l1, argv[2], l2);

	return (0);
}
