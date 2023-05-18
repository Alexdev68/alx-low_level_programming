#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_dnodeint - This function add a node to the beginning of a linked list
 * @head: This is a pointer to the head of the liked list
 * @n: This is the value to but added at the beginning
 * Return: This returns the address of the new element, or NULL if it failed
 */
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

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;

	return (new);
}
