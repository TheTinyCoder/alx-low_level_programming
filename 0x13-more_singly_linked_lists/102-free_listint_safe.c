#include "lists.h"
#include "stdio.h"

/**
 * find_loopnode - function entry-point
 *
 * Description: finds node where a loop starts in a linked list
 * @head: pointer to singly linked list
 * Return: address of node if loop is found, NULL otherwise
 */

listint_t *find_loopnode(listint_t *head)
{
	nodePtr temp, temp1;

	if (head == head->next)
		return (head);
	for (temp = head->next; temp; temp = temp->next)
	{
		for (temp1 = head; temp1 != temp; temp1 = temp1->next)
		{
			if (temp1 == temp->next)
				return (temp);
		}
	}
	return (NULL);
}


/**
 * free_listint_safe - function entry-point
 *
 * Description: frees a listint_t linked list that has a loop
 * @head: pointer to head of singly linked list
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **head)
{
	nodePtr loop_node = NULL, temp = (*head)->next, temp1;
	size_t count = 0;

	if (head)
		loop_node = find_loopnode(*head);
	while (temp)
	{
		count++;
		temp1 = temp;
		if (temp == loop_node)
		{
			free(temp);
			break;
		}
		temp = temp->next;
		free(temp1);
	}
	*head = NULL;
	return (count);
}
