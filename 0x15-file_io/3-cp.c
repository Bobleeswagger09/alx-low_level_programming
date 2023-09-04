#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - 1024 bytes to be allocated for the buffer
* @file: name buffer file[char]  being stored
*
* Return: Pointer to new-buffer
*/

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/

void close_file(int fd)
{
	int Closer;

	Closer = close(fd);

	if (Closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.*
*
* Return: 0 on ( Success ).
*
* Description: If the arg count is wrong - exit code 97.
*              If Filefrom no dey or cannot be reAd - exit code 98.
*              If Fileto Cannot be Created or writteN to - exit code 99.
*              If Fileto or Filefrom cannot be closeD - exit code 100.
*/

int main(int argc, char *argv[])
{
	int from, t_o, Read, wRite;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	Read = read(from, buff, 1024);
	t_o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || Read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wRite = write(t_o, buff, Read);
		if (t_o == -1 || wRite == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		Read = read(from, buff, 1024);
		t_o = open(argv[2], O_WRONLY | O_APPEND);

	} while (Read > 0);

	free(buff);
	close_file(from);
	close_file(t_o);

	return (0);
}
