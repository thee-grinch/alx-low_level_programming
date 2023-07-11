#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file
 * @filename: the file name to be read
 * @letters: the number of letters
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, op;
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}
	re = read(op, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, letters);
	if (wr == -1 && wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
