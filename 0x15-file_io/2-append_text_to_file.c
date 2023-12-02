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
	int open_fNormal, n_normal, rw_normal;

	if (!filename)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	open_fNormal = open(filename, O_WRONLY | O_APPEND);
	if (open_fNormal == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (n_normal = 0; text_content[n_normal]; n_normal++)
		{
			rw_normal = write(file_normal, text_content, n_normal);
			if (rw_normal == -1)
				return (-1);
		}
	}

	close(open_fNormal);
	return (-1);
}
