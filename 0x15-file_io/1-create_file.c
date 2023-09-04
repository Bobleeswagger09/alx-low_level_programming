#include "main.h"

/**
 * create_file - reate a function that creates a file
 * @filename: A pointer to the name of the ( file ) to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on Succces : -1
 */

int create_file(const char *filename, char *text_content)
{
	int filedesc, wRite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	filedesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wRite = write(filedesc, text_content, len);

	if (filedesc == -1 || wRite == -1)
		return (-1);

	close(filedesc);

	return (1);
}
