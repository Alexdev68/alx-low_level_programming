#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return (new);
}
