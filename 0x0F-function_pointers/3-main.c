#include "3-calc.h"
#include <string.h>

/**
 * main- run the program
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);


	if (get_op_func(o) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit (99);
	}
	
	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
