#include "main.h"
/**
 * string_toupper - change all lowercase of string to uppercase
 * @n: string to ne changed
 * Return: pointer of the changed string
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
