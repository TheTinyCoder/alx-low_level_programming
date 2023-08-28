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
	nodePtr new, temp, nodes;
	unsigned int i = 0, nodes_len = 0;

	nodes = *head;
	while (nodes)
	{
		nodes = nodes->next;
		nodes_len++;
	}
	if (nodes_len < idx)
	{
		free(nodes);
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 && !*head)
	{
		new->next = NULL, *head = new;
		return (*head);
	}
	temp = *head;
	while (temp && i <= idx)
	{
		if (i == idx - 1 || idx == 0)
		{
			new->next = temp->next, temp->next = new;
			break;
		}
		temp = temp->next;
		i++;
	}
	return (temp);
}
