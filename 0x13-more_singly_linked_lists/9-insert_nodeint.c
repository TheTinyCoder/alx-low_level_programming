#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * create_node - function entry-point
 *
 * Description: creates a new node
 * @n: data for the node
 * Return: new node
 */

listint_t *create_node(int n)
{
	nodePtr new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}


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

	if (idx == 0)
	{
		new = create_node(n);
		new->next = *head == NULL ? NULL : *head, *head = new;
		return (*head);
	}
	temp = *head;
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new = create_node(n);
			new->next = temp->next, temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
