#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1 if it works, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	j = ~(j << index);

	*n = *n & j;



	return (1);

}
