#include "main.h"

/**
 * get_bit - Fuction that gets the value of a bit at a given index.
 * @n: The bit int.
 * @index: index gets the value at 0.
 *
 * Return: If an error occurs - -1 or value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
