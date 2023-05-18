#include "lists.h"
#include <stdlib.h>

/**
 * *add_dnodeint_end - This function adds a node a the end of a linked list
 * @head: This is a pointer to the head of the list
 * @n: This is the value to be added
 * Return: This returns the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
