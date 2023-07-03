#include "lists.h"
/**
 * add_nodeint_end -  adds a node in full
 * @head: the head of the list
 * @n: the n element of the node
 * Return: the ponter to the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *buffer;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		buffer = *head;
		while (buffer->next)
		{
			buffer = buffer->next;
		}
		buffer->next = new_node;
	}
	return (new_node);
}
