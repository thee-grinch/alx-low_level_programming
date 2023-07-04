#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a listint structure
 * @head: pointer to a pointer pointing to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *buffer;

	while (*head)
	{
		buffer = (*head)->next;
		free(*head);
		*head = buffer;
	}
}
