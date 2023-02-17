#include <stdio.h>
/**
 * main - a program that prints all possible combinations of single-digit
 * numbers in ascending order seperated by , and space. no printf/put
 *
 * Return: 0 on success
 */
int main(void)
	{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
