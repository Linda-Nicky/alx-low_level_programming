#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory, exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
