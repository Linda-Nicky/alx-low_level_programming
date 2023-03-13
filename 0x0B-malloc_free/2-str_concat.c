#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	result = malloc(sizeof(char) * (i + j + 1));
	if (result == NULL)
	{
		free(result);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		result[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		result[k] = s2[j];
	return (result);
}
