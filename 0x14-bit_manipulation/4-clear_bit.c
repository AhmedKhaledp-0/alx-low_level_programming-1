#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful.
 *          otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_val;

	/* checking */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	num_val = ~(1 << index);
	*n = *n & num_val;

	return (1);
}
