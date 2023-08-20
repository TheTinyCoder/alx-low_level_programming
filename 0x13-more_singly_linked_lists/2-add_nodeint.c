#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * add_nodeint - function entry-point
 *
 * Description: adds a node to beginning of a listint_t list
 * @head: double pointer to singly linked list
 * @str: pointer to string
 * Return: address of node added to linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	nodePtr new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
