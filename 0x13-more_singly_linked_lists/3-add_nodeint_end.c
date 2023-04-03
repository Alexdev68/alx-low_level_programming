#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint_end - This function adds a new node at the end of a linked list
 * @head: This is the reference to the head of the linked list
 * @n: This is number stored in the new node
 * Return: This returns the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new_node;

	return (new_node);
}
