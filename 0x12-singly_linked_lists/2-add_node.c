#include "lists.h"
#include <string.h>
/**
 * add_node - adds  a node at the beginning
 * @head: pointer to the head
 * @str: the str of the node
 * Return: the pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
