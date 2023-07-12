#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the strlen
 * @s: the number of characters printed
 * Return: the string lenth
 */
int _strlen(char *s)
{
	if (!s || *s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * create_file - creates a file using open system call
 * @filename: the file name to be created path
 * @text_content: the text content of the file
 * Return: returns one or zero
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	if (!text_content)
		return (1);
	wr = write(op, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}

