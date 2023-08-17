#include "lists.h"
#include "stdio.h"

/**
 * print_list - function entry-point
 *
 * Description: prints all the elements of a list_t list
 * @h: pointer to singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 1;
	nodePtr temp;

	if (h == NULL)
		return (0);
	h->str == NULL ? printf("[0] (nil)\n") : printf("[%d] %s\n", h->len, h->str);
	temp = h->next;
	while (temp != NULL)
	{
		i++;
		temp->str == NULL ?
			printf("[0] (nil)\n") : printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
