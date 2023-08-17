#include "lists.h"
/**
 * get_dnodeint_at_index - retuns the node at a certain index
 * @head: the head of the index
 * @index: the index of the node to be found
 * Return: the node at certain index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0;  head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
