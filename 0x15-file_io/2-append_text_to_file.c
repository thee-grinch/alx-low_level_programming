#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the string length
 * @s: the string to be calbulated
 * Return: the number of characters
 */
int _strlen(char *s)
{
	if (!s || *s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * append_text_to_file - appends text to file
 * @filename: the file to be created
 * @text_content: the text content to be appended
 * Return: 1 or zero
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);
	if (filename && !text_content)
		return (1);
	op = open(filename, O_RDWR | O_APPEND);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}
