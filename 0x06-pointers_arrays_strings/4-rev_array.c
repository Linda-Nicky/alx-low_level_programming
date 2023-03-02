#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int tempo, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tempo = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tempo;
	}
}
