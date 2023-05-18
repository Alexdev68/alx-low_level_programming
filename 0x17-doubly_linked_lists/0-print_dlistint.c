#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - This function prints all the data of a linked list
 * @h: This is a pointer to the head of a linked list
 * Return: This returns the length of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
