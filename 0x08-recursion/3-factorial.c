#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @num: number to return the factorial from
 *
 * Return: factorial of @num
 */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}
