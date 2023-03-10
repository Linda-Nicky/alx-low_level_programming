#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  a program that multiplies two numbers, print the result of
 * multiplication followed by a new line
 * print error if it doesn't receive two argument
 * @argc: number of argumets on command line.
 * @argv:array of all the arguments passed from the command line.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
