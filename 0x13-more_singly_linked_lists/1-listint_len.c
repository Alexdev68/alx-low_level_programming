#include "lists.h"

/**
 * listint_len - This returns the number of elements in a listint_t list
 * @h: This is the reference to the head of the linked list
 * Return: This returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
