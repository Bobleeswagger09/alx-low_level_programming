
#include "main.h"

/**
 * create_file - a func that CREATES a FILE
 * @filename: POinter to name of file to create.
 * @text_content: Pointer to str to write file
 *
 * Return: 1 on SUCCESS, -1 on FAIL
*/


int create_file(const char *filename, char *text_content)
{
	int file_openNormal, file_writeNormal, len_normal = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_normal = 0; text_content[len_normal];)
			len_normal++;
	}

	file_openNormal = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	file_writeNormal = write(file_openNormal, text_content, len_normal);

	if (file_openNormal == -1 || file_writeNormal == -1)
		return (-1);

	close(file_openNormal);

	return (1);
}

