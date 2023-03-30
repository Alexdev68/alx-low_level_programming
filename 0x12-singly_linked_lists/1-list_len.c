#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - This function returns the number of elements in a linked list
 * @h: This is a pointer to the head of the linked list
 * Return: This returns the number of elements in a linked lists_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
