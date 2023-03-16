#include <stdlib.h>
#include "main.h"

/**
 * array_range - afunction that creates an array of integers
 * @min: function parameter
 * @max: func para
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *n, i;

	if (min > max)
		return (NULL);
	n = malloc((max - min + 1) * sizeof(*n));
	if (n == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		n[i] = min + i;
	return (n);
}
