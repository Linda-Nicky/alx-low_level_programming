#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 *
 * Return: the number of bytes in s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i
	unsigned int j = 0

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i +1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
