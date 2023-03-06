#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: pointer to the memory area that will be copied into.
 * @src: what we are to copy.
 * @n: n bytes of @src.
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/**
	 * declaring an unsigned int
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
