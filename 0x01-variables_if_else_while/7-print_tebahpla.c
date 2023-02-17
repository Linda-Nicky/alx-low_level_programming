#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * usind putchar 2x without printf/puts
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
