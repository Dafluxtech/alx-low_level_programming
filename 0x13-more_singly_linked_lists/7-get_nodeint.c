#include "lists.h"

/**
 * get_nodeint_at_index - function returns the
 * nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: The data at the nth node, NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ca = 0;

	while (head)
	{
		if (index == ca)
			return (head);

		head = head->next;
		ca++;
	}
	return (NULL);
}
