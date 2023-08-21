#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a certain index
 * @h: the pointer to head
 * @idx: the index to be inserted
 * @n: the integer part
 * Return: NULL or the address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *buffer;
	unsigned int i;

	if (idx != 0 && *h == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	current = *h;
	while (current->prev != NULL)
		current = current->prev;
	i = 0;
	while (current)
	{
		if (i == idx - 1)
		{
			buffer = malloc(sizeof(dlistint_t));
			if (!buffer)
				return (NULL);
			buffer->n = n;
			buffer->next = current->next;
			buffer->prev = current;
			current->next = buffer;
			buffer->next->prev = buffer;
			return (buffer);
		}
		if (current->next == NULL && i + 1 == idx)
			return (add_dnodeint_end(&current, n));
		current = current->next;
		++i;
	}
	return (NULL);
}
