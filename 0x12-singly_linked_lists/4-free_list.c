#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: the lists head
 */
void free_list(list_t *head)
{
	list_t *Next;

	while (head)
	{
		Next = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = Next;
	}
}
