#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * pop_listint - function entry-point
 *
 * Description: pops the head of a listint_t list
 * @head: double pointer to singly linked list
 * Return: data of popped node
 */

int pop_listint(listint_t **head)
{
	nodePtr temp;
	int n;

	if ((*head) == NULL)
		return (0);
	temp = (*head);
	(*head) = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
