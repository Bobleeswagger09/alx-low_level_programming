#include "main.h"

/**
 * append_text_to_file - THis function that appends text at the end of a file.
 * @filename: POINTER TO enD of FiLE
 * @text_content: STRING to add to end of FILE
 * Return: -1 on FAIL else 1 on SUCCESS
 *
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_openNormal, file_writeNormal, MYlen = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (MYlen = 0; text_content[MYlen];)
			MYlen++;
	}

	file_openNormal = open(filename, O_WRONLY | O_APPEND);
	file_writeNormal = write(file_openNormal, text_content, MYlen);

	if (file_writeNormal == -1 || file_writeNormal == -1)
		return (-1);

	close(file_openNormal);

	return (1);
}
