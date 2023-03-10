#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: If str1 < str2, then negative
 *         If str1 == str2, 0.
 *         If str1 > str2, then positive
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
