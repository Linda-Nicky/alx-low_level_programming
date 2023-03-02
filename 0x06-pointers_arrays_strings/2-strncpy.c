#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: pointer to destination buffer
 * @src: This is the source input string.
 * @n: The number of bytes of src.
 *
 * Return: to string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
