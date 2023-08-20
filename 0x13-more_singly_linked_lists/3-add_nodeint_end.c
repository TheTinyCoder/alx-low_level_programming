#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * add_nodeint_end - function entry-point
 *
 * Description: adds a node to the end of a list_t list
 * @head: double pointer to singly linked list
 * @n: pointer to string
 * Return: address of node added to linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	nodePtr new, temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (*head);
}
