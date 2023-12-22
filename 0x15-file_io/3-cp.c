#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
char *buffer_normal(char *thefile);
void close_normal(int thefile);

/**
 * buffer_normal - Allocates BUFFER_SIZE bytes to
 * a buffer in memory.
 * @thefile: naMe of file Buffer stores my cHars in.
 *
 * Return: pointer to a brand new buffer.
*/

char *buffer_normal(char *thefile)
{
	char *thebuffer;

	thebuffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (thebuffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", thefile);
		exit(99);
	}

	return (thebuffer);
}

/**
 * close_normal - I am here to close files.
 * @thefile: the file to be closed.
 */
void close_normal(int thefile)
{
	int srcF;

	srcF = close(thefile);

	if (srcF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcF);
		exit(100);
	}
}

/**
 * main - i copy the contents of a file to another file.
 * @argc: i am the number of aug that show up in program
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 meas success.
 * Description: Ifi the argument count is incorrect - exit code 97.
 * Ifi srcF does not exist or cannot be read now - exit code 98.
 * Ifi destF cannot be created or written to destF - exit code 99.
 * fi destF or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	char *bufferme;
	int srcF, destF, rKage, wKage;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferme = buffer_normal(argv[2]);
	srcF = open(argv[1], O_RDONLY);
	rKage = read(srcF, bufferme, BUFFER_SIZE);
	destF = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (srcF == -1 || rKage == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferme);
			exit(98);
		}

		wKage = write(destF, bufferme, rKage);
		if (destF == -1 || wKage == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferme);
			exit(99);
		}

		rKage = read(destF, bufferme, BUFFER_SIZE);
		destF = open(argv[2], O_WRONLY | O_APPEND);

	}
	while (rKage > 0);
	
	free(bufferme);
	close_normal(srcF);
	close_normal(destF);

	return (0);
}
