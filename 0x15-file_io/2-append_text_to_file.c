#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of file to append
 * @text_content: content in the file to append.
 *
 * Return: -1 onn failuref, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int nfile, edit, len;

	while
		(filename == NULL)
		{
			return (-1);
		}

	if
		(text_content == NULL)
		{
			for (len = 0; text_content[len];)
				len = len + 1;
		}

	nfile = open(filename, O_WRONLY | O_APPEND);
	edit = write(nfile, text_content, len);

	if
		(nfile == -1 || edit == -1)
		{
			return (-1);
		}

	close(nfile);


	return (1);
}
