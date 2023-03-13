include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *result;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		result[j] = str[j];
	return (result);
}
