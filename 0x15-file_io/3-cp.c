#include "main.h"
#define BUFFER_SIZE 1024

/**
 * copy_filenormal - THis func copies the content of a file to another
 * using a buffer of size 1024 bytes normal.
 * @src : represents the source file path
 * @dest : reepresents the paths of the desticnation file.
 * Return: void
*/

void copy_filenormal(const char *src, const char *dest)
{
	int OfDD, TfDD, readMe;
	char buff[BUFFER_SIZE];

	OfDD = open(src, O_RDONLY);
	if (OfDD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	TfDD = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (TfDD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}

	while ((readMe = read(OfDD, buff, BUFFER_SIZE)) > 0)
	{
		if (write(TfDD, buff, readMe) != readMe)
		{
			dprintf(STDERR_FILENO, "Error: Can't w to %s\n", dest);
			exit(99);
		}
	}


	if (read_normal == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't r from file %s\n", src);
		exit(98);
	}

	if (close(OfDD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't c OfDD %d\n", OfDD);
		exit(100);
	}

	if (close(TfDD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't c OfDD %d\n", TfDD);
		exit(100);
	}
}

/**
 * main - ensures correct number of augments are provided
 * @argc: num of augments
 * @argv: num of pointers to augments
 * Return: 0 ON SUCCESS
 *
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_filenormal(argv[1], argv[2]);
	return (0);
}

