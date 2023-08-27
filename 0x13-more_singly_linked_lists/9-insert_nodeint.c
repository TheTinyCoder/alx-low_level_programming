#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * insert_nodeint_at_index - function entry-point
 *
 * Description: inserts node at index n of a listint_t list
 * @head: double pointer to singly linked list
 * @idx: index to insert node at
 * @n: data of node to insert
 * Return: nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	nodePtr new, temp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head, idx -= 1;
	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
		new->next = temp->next, temp->next = new;
	else
		free(new);
	return (temp);
}
