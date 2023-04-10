#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename: the name of the file
 * @text_content: contents of the file
 *
 * Return: -1 if its fails, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int newfile, len, edit;

	if
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


	newfile = open(filename, O_CREAT | O_RDWR | S_IWUSR | O_TRUNC, S_IRUSR);
	edit = write(newfile, text_content, len);

	if
		(newfile == -1)
		{
			return (-1);
		}
	if
		(edit == -1)
		{
			return (-1);
		}
	close(newfile);

	return (1);

}