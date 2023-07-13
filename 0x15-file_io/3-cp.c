#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * main - copies a file to another
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	int re, wr, src, dest, cl, cl2;
	char buffer[1024];
	
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((re = read(src, buffer, 1024)) > 0)
	{
		if (wr < 0 || write(dest, buffer, re) != re)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(src);
			exit (99);
		}
	}
	if (re < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl = close(src);
	cl2 = close(dest);
	if (cl < 0 || cl2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cl < 0 ? src : dest);
		exit(100);
	}
	return (0);
}
