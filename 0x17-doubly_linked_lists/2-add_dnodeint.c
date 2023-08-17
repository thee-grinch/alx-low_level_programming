#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning
 * @head: the head of the list
 * @n: the integer value
 * Return: the new nodes location
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *buffer;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	buffer = *head;
	while (buffer->prev != NULL)
		buffer = buffer->prev;
	buffer->prev = new_node;
	new_node->next = buffer;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
