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
	int FF, SF, theData;
	char buff[BUFFER_SIZE];
	struct stat st;
	int destexist;


	FF = open(src, O_RDONLY);
	if (FF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	destexist = stat(dest, &st);

	if (destexist == 0 && (st.st_mode & S_IFMT) == S_IFREG)
	{
		SF = open(dest, O_WRONLY);
		if (SF == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't open existing file %s\n", dest);
			exit(99);
		}
		fchmod(SF, st.st_mode);
	}
	else
	{
		SF = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0644);
		if (SF == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}

		while ((theData = read(FF, buff, BUFFER_SIZE)) > 0)
		{
			if (write(SF, buff, theData) != theData)
			{
				dprintf(STDERR_FILENO, "Error: Can't w to %s\n", dest);
				exit(99);
			}
		}
	}

	if (close(FF) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't copy FF %d\n", FF);
		exit(100);
	}

	if (close(SF) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't copy SF %d\n", SF);
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
