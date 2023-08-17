#include "lists.h"
/**
 * add_dnodeint_end - adds a node towards the end of the list
 * @head: the head of the list
 * @n: the integer member of the list
 * Return: the address of the added list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	while (buffer->next != NULL)
		buffer = buffer->next;
	buffer->next = new_node;
	new_node->prev =  buffer;
	new_node->next = NULL;
	return (new_node);
}
