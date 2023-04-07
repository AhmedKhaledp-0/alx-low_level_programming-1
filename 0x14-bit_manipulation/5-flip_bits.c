#include "main.h"

/**
 * flip_bits - number of bits to change to get number
 * @n: int number 1
 * @m: int number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int holder;
	int counter = 0;
	unsigned long int new_num;
	unsigned long int ex_num = n ^ m;
	int num = sizeof(unsigned long int) * 8 - 1;

	for (holder = num; holder >= 0; holder--)
	{
		new_num = ex_num >> holder;
		if (new_num & 1)
			counter++;
	}

	return (counter);
}
