#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - This function frees a listint_t list containing a loop
 * @h: This is the reference to the head of the linked list
 * Return: This returns the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, count = loopdetector(*h);
	listint_t *x = *h;
	listint_t *j;

	if (count == 0)
	{
		while (x != NULL)
		{
			j = x->next;
			free(x);
			x = j;
			count++;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			free(x);
			j = x->next;
			x = j;
		}
	}
	*h = NULL;

	return (count);
}
