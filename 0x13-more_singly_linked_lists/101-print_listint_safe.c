#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t loopdetector(const listint_t *head);

/**
 * print_listint_safe - This function prints a listint_t linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = loopdetector(head);
	const listint_t *x = head;

	if (count == 0)
	{
		while (x != NULL)
		{
			printf("[%p] %d\n", (void *)x, x->n);
			x = x->next;
			count++;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)x, x->n);
			x = x->next;
		}
		printf("-> [%p] %d\n", (void *)x, x->n);
	}
	return (count);
}

/**
 * loopdetector - This function checks if a linked list has a loop in it
 * @head: This is the const linked list head ref
 * Return: This return 0
 */
size_t loopdetector(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t counter = 1;

	if (head == NULL)
		return (0);

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				counter++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;

			while (slow != fast)
			{
				counter++;
				slow = slow->next;
			}
			return (counter);
		}
	}
	return (0);
}
