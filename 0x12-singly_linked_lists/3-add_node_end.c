#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node in the end
 * @head: the pointer to the head
 * @str: the str element of the node
 * Return: the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *buffer;
	list_t *newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		buffer = *head;

		while (buffer->next != NULL)
		{
			buffer = buffer->next;
		}
		buffer->next = newnode;
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;
	return (newnode);
}
