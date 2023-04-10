#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file to read.
 * @letters: number of letters to be read and printed,
 *
 * Return: total nember of letters it read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_buffer;
	ssize_t check, text_file, edit;

	if (filename == NULL)
	{
		return (0);
	}
	
	file_buffer = malloc(sizeof(char) * letters);
	if (file_buffer == NULL)
	{
		return (0);
	}

	check = open(filename, O_RDONLY);
	text_file = read(check, file_buffer, letters);
	edit = write(STDOUT_FILENO, file_buffer, text_file);

	if (check == -1 || text_file == -1 || edit == -1 || edit != text_file)
	{
		free(file_buffer);
		return (0);
	}

	free(file_buffer);
	close(check);

	return (edit);
}
