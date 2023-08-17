#include "lists.h"
/**
 * free_dlistint - frees adlistint_t list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head->prev != NULL)
		head = head->prev;
	while (head)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
	head = NULL;
}
