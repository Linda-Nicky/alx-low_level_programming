#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of argumets on command line.
 * @argv:array of all the arguments passed from the command line.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
