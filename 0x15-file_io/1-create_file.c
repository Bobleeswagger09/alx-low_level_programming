
#include "main.h"

/**
 * create_file - a func that CREATES a FILE
 * @filename: POinter to name of file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: -1 on FIAL ELSE 1
 */

int create_file(const char *filename, char *text_content)
{
	int o_fileNormal, bytes_wNormal;

	if (!filename)
		return (-1);

	o_fileNormal = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (o_fileNormal == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_wNormal = write(o_fileNormal, text_content, strlen(text_content));
		if (bytes_wNormal == -1)
		{
			close(o_fileNormal);
			return (-1);
		}
	}
	close(o_fileNormal);
	return (1);
}
