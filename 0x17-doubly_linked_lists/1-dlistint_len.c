#include "lists.h"

/**
 * dlistint_len - This function returns the length of a doubly linked list
 * @h: This is a pointer to the head of the list
 * Return: This returns the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
