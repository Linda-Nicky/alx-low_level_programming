#include "main.h"

/**
 * _memset - a function that fills
 * memory with a constant byte
 *
 * @s: a pointer to the memory area to be filled
 * @b: character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declaring an unsigned int
	 * because value to be storted a will always be
	 * zero or positive (non-negative)
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
