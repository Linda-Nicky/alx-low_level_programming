#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *  Return: 1 on success if c is lowercase, 0 otherwise
 */

int _islower(int c)
{

	if (c >= 97 && c >= 122)
	{

		return (1);
	}
	return (0);


}