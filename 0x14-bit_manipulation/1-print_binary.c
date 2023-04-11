#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');

	return ();
}