#include "lists.h"
#include <stdio.h>


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
