#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: This pointer points to the head of the list_t
 * Return: This returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		count += 1;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
