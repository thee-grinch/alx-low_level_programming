#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies a string
 * @src: the source string
 * @dest: the destination string
 * Return: the copied string
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - finds a dog length
 * @s: the ams
 * Return: the lenth
 */
int _strlen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * new_dog - adds a new dog
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_owner, len_name;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(len_name * sizeof(char) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(len_owner * sizeof(char) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->name = _strcpy(name, newDog->name);
	newDog->age = age;
	newDog->owner = _strcpy(owner, newDog->owner);
	return (newDog);
}
