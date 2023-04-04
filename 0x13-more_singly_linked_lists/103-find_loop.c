#include "lists.h"

/**
 * *find_listint_loop - This function finds the loop in a linked list
 * @head: This is the reference to the head of the linked list
 * Return: This returns the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}
			slow = slow->next;

			while (slow != fast)
			{
				slow = slow->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
