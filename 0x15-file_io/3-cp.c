#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * copy_and_closenormal - duplicates the content of a file
 * @FF: Source file normal
 * @SF: Destination file normal
 * Return: void
*/

void copy_and_closenormal(int FF, int SF)
{
	char buff[BUFFER_SIZE];
	ssize_t theData;

	while ((theData = read(FF, buff, BUFFER_SIZE)) > 0)
	{
		if (write(SF, buff, theData) != theData)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to file\n");
			exit(99);
		}
	}

	if (close(FF) == -1 || close(SF) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close files\n");
		exit(100);
	}
}

/**
 * copy_filenormal - duplicate Content of one file to another
 * @src: represents the path to the source
 * file that needs to be copied
 * @dest: represents the path to the destination normal
 * where content of source will be copied to.
 * Return: void. void! which means nothing
*/

void copy_filenormal(const char *src, const char *dest)
{
	int FF, SF;
	struct stat st;

	int dest_exist = stat(dest, &st);

	FF = open(src, O_RDONLY);
	if (FF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (dest_exist == 0 && (st.st_mode & S_IFMT) == S_IFREG)
		SF = open(dest, O_CREAT | O_WRONLY | O_TRUNC, st.st_mode);
	else
		SF = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (SF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", dest);
		exit(99);
	}

	copy_and_closenormal(FF, SF);
}

/**
 * main - entry point of this program normal
 * @argc: rEpresents the number of cli augments
 * passed to the program when it's executed.
 * @argv: augment Vector; it an array of strings.
 * each string represents the one of the augments
 * passed to the program
 * Return: 0 onsuccess
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

