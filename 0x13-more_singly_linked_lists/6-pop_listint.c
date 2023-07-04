#include "lists.h"
/**
 * pop_listint - removes a head node
 * @head: the head node
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *buffer;
	int n;

	if (!head || !(*head))
		return (0);
	buffer = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = buffer;
	return (n);
}
