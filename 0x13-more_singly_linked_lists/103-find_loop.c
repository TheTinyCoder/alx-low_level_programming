#include "lists.h"
#include "stdio.h"

/**
 * find_listint_loop - function entry-point
 *
 * Description: finds node where a loop starts in a linked list
 * @head: pointer to singly linked list
 * Return: address of node if loop is found, NULL otherwise
 */

listint_t *find_listint_loop(listint_t *head)
{
	nodePtr temp, temp1;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	for (temp = head->next; temp; temp = temp->next)
	{
		for (temp1 = head; temp1 != temp; temp1 = temp1->next)
		{
			if (temp1 == temp->next)
				return (temp->next);
		}
	}
	return (NULL);
}
