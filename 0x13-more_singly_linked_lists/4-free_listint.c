#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
		free(head);
		head = head->next;
	}
}
