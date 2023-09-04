#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and
 * prints it to the POSIX standard output..
 * @filename: file (text) being read
 * @letters:  num OF letters to be read
 * Return: w- number of bytes read and (printed)
 * 0 if fucnt fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filedesc;
	ssize_t wRite;
	ssize_t store;

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	store = read(filedesc, buffer, letters);
	wRite = write(STDOUT_FILENO, buffer, store);
	free(buffer);
	close(filedesc);
	return (wRite);
}
