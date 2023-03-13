#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @s: The storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char s)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);
	m = malloc(sizeof(s) * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		m[i] = s;
	return (m);
}
