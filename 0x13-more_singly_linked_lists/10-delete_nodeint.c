#include "lists.h"
/**
 * delete_nodeint_at_index - read the function name
 * @head: the pointer to the head
 * @index: the index to be deleted
 * Return: 1 if succesful or -1 if otherwise
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *buffer, *next;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	buffer = *head;
	previous = buffer;
	next = buffer->next;
	if (index == 0)
	{
		free(buffer);
		*head = next;
		return (1);
	}
	while (buffer)
	{
		if (i > index)
			return (-1);
		if (i == index)
		{
			free(buffer);
			previous->next = next;
			return (1);
		}
		previous = buffer;
		buffer = buffer->next;
		next = buffer;
	}
	return (-1);
}

