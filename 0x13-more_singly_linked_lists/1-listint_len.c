#include "lists.h"
/**
 * listint_len - function that returns number of
 * elements in a linked listint_t
 * @h: head
 * Return: returns 0
 */
size_t listint_len(const listint_t *h)
{
	int ca = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		ca++;
		h = h->next;
	}

	return (ca);
}
