#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: row
 * @height: column
 *
 * - Each element of the grid should be initialized to 0
 * - The function should return NULL on failure
 * - If width or height is 0 or negative, return NULL
 * Return: 2 dimensional array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j, w_len, h_len;

	w_len = width * sizeof(int);
	h_len = height * sizeof(int *);
	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(h_len);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] =  malloc(w_len);
		if (ar[i] == NULL)
		{
			/* Free memory if malloc fail */
			while (i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
