#include "lists.h"
#include "stdio.h"

/**
 * list_len - function entry-point
 *
 * Description: counts the nodes of a list_t list
 * @h: pointer to singly linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
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
