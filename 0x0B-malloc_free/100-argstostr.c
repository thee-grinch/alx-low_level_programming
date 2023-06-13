#include "main.h"
#include <stdlib.h>
/**
 * _strlen - checks the length of the string
 * *Return: the lenght of the string
 * @s: the str len
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * argstostr - converts arguments to string
 * @ac: argument counter
 * @av: the argument variable
 * Return: the string or null
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, k, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	i = 0;
	str = (char *)malloc(ac * sizeof(char *));
	if (str == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
