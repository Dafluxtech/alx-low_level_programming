#include "lists.h"

/**
 * free_listint2 -function that frees listint_t.
 * @head: first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			free_node = *head;
			*head = (*head)->next;
			free(free_node);
		}
		*head = NULL;
	}
}
