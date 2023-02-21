#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase
 * followed by a new line with putchar
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		_putchar(alphab);
		alphab++;
	}
	_putchar('\n');
}
