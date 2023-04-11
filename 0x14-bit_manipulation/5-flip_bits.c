#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: The number.
 * @m: where it flips n into (number)
 *
 * Return: The necessary number of bits to be flip to move from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lin = n ^ m, bits = 0;

	while (lin > 0)
	{
		bits += (lin & 1);
		lin >>= 1;
	}

	return (bits);
}
