#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int value to be swapped
 * @b: second value to be swapped
 *
 * Return: void on success
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
