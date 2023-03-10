#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints all arguments it receives,
 * All arguments should be printed, including the first one
 * only print one argument per line, ending with a new line
 * @argc: number of argumets on command line.
 * @argv:array of all the arguments passed from the command line.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
