#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * add_node_end - function entry-point
 *
 * Description: adds a node to the end of a list_t list
 * @head: double pointer to singly linked list
 * @str: pointer to string
 * Return: address of node added to linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	nodePtr new, temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
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
