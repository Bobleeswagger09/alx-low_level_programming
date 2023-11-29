#include "main.h"
/**
 * read_textfile - Dis iz a function that reads a
 * textfile and prints it to the POSIX standard output
 * @filename: name of file--to--read
 * @letters: number of letter to--read--and--print
 *
 * Return: actual number of letters i can read--n--print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readf, writef;
	char *thebuffer_normal;

	if (!filename)
		return (0);

	thebuffer_normal = malloc(sizeof(char) * letters);
	if (thebuffer_normal == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	readf = read(openf, thebuffer_normal, letters);
	writef = write(STDOUT_FILENO, thebuffer_normal, readf);

	if (openf == -1 || readf == -1 || writef == -1 || writef != readf)
	{
		free(thebuffer_normal);
		close(openf);
		return (0);
	}

	free(thebuffer_normal);
	close(openf);

	return (writef);
}
