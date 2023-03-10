#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of argumets on command line
 * @argv: array of all the arguments passed from the command line
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);

	return (0);
}
