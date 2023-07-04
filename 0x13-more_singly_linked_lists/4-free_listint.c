#include "lists.h"
/**
 * free_listint - the structure to be freed
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *buffer = head;

	while (buffer)
	{
		buffer = head->next;
		free(head);
		head = buffer;
	}
}
