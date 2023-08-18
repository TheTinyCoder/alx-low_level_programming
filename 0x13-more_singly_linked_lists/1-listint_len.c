#include "lists.h"
#include "stdio.h"

/**
 * listint_len - function entry-point
 *
 * Description: counts the nodes of a listint_t list
 * @h: pointer to singly linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 1;
	nodePtr temp;

	if (h == NULL)
		return (0);
	temp = h->next;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
