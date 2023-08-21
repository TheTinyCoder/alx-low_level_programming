#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * sum_listint - function entry-point
 *
 * Description: gets nth node of a listint_t list
 * @head: pointer to singly linked list
 * Return: nth node
 */

int sum_listint(listint_t *head)
{
	nodePtr temp;
	int i = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
