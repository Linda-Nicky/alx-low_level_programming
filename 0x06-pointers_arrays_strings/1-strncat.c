#include "main.h"

/**
 * _strncat - a function concatenates two strings
 *
 * @dest: string to be appended
 * @src: string to be appended to dest
 * @n: number of bytes from src appended to dest
 *
 * Return: to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

		while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
