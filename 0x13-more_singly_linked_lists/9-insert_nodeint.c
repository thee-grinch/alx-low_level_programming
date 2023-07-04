#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: the head node
 * @idx: the index
 * @n: the data
 * Return: the node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buffer, *new_node, *next;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	buffer = *head;
	while (buffer)
	{
		if (i == idx - 1)
		{
			next = buffer->next;
			buffer->next = new_node;
			new_node->next = next;
			return (new_node);
		}
		i++;
		buffer = buffer->next;
	}
	return (NULL);
}
