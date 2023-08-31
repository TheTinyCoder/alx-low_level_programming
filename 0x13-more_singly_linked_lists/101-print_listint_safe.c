#include "lists.h"
#include "stdio.h"

/**
 * find_loopnode - function entry-point
 *
 * Description: finds node where a loop starts in a linked list
 * @head: pointer to singly linked list
 * Return: address of node if loop is found, NULL otherwise
 */

const listint_t *find_loopnode(const listint_t *head)
{
	const listint_t *temp, *temp1;

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
 * print_listint_safe - function entry-point
 *
 * Description: prints a listint_t linked list that has a loop
 * @head: pointer to singly linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_node, *temp;
	size_t count = 0;
	if (!head)
		exit(98);
	loop_node = find_loopnode(head);
	for (temp = head; temp; temp = temp->next)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp == loop_node)
			break;
	}
	if (loop_node)
		printf("-> [%p] %d\n", (void *)loop_node->next, loop_node->next->n);
	return (count);
}
