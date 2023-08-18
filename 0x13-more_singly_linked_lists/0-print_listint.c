#include "lists.h"
#include "stdio.h"

/**
 * print_listint - function entry-point
 *
 * Description: prints all the elements of a listint_t list
 * @h: pointer to singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 1;
	nodePtr temp;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	temp = h->next;
	while (temp != NULL)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
