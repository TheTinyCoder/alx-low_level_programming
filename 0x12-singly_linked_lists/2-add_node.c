#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * add_node - function entry-point
 *
 * Description: adds a node to beginning of a list_t list
 * @head: double pointer to singly linked list
 * @str: pointer to string
 * Return: address of node added to linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	nodePtr new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
