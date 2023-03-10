#include <stdlib.h>
#include <stdio.h>

/**
 * main - write a program that adds positive numbers.
 * @argc: number of argumets on command line.
 * @argv:array of all the arguments passed from the command line.
 *
 * Return: if one number contain non digit symbols -1, else - 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, sum = 0;

	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2]; n2++)
		{
			if (argv[n1][n2] < '0' || argv[n1][n2] > '7')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n1]);
	}
	printf("%d\n", sum);
	return (0);
}
