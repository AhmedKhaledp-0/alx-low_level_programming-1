#include "main.h"

/**
 * set_bit - bit at a given index
 * @n: pointer to the number
 * @index: index of bit to set
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
