#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array.
 * @size: size of the array
 * @action:  pointer to the function you need to use
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
