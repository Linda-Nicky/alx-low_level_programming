#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a
 * number.
 * @a: the number to calculate the square root of
 * @b: the iterator.
 * Return: the natural square root
 */

int actual_sqrt_recursion(int a, int b);

int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number.
 * @a: the number to calculate the sqaure root.
 * @b: the iterator.
 *
 * Return: the natural square root
 */

int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
