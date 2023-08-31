#include "lists.h"
#include "stdio.h"

/**
 * find_loop - function entry-point
 *
 * Description: finds a loop in a linked list
 * @head: pointer to singly linked list
 * @node: node (to check if its address is repeated)
 * @n: index position of node;
 * Return: 1 if loop is found, 0 otherwise
 */

size_t find_loop(const listint_t *head, const listint_t *node, size_t n)
{
	const listint_t *temp;
	size_t idx = 0;

	if (!head)
		return (0);
	for (temp = head; temp && idx <= n; temp = temp->next)
	{
		if (temp == node)
			return (1);
		idx++;
	}
	return (0);
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
	const listint_t *temp;
	size_t idx = 0, loop;

	for (temp = head; temp; temp = temp->next)
	{
		loop = find_loop(head, temp->next, idx);
		if (loop == 0)
			printf("[%p] %d\n", (void *)temp, temp->n);
		else
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			break;
		}
		idx++;
	}
	return (idx + 1);
}
