#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - A function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the bytes to search for
 *
 * Return: pointer to the byte in s that matches a bytes in accept
 * or NULL if non is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
