#include "lists.h"
/**
 * get_nodeint_at_index - finds a node at a given index
 * @head: the head of the node
 * @index: the tvs index
 * Return: pointer of the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (num == index)
			return (tmp);
		num++;
		tmp = tmp->next;
	}
	return (NULL);
}
