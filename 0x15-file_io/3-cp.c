#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - a program that copies the content of a file to another file.
 * @argc: the number of arguments count
 * @argv: the array of pointers of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int f_from, f_to, x, edit, text;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (1)
	{
		text = read(f_from, buffer, 1024);
		if (text == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
		if (text > 0)
		{
			edit = write(f_to, buffer, text);
			if (edit == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		} else
			break;
	}
	x = close(f_from);
	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't close su %d\n", f_from), exit(100);
	x = close(f_to);
	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't close su %d\n", f_to), exit(100);
	return (0);
}
