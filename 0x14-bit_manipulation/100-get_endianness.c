#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 */
int get_endianness(void)
{
	int val = 1;

	char *ch = (char *)&val;

	return ((*ch == 1) ? 1 : 0);
}

