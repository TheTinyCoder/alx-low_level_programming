#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * free_listint2 - function entry-point
 *
 * Description: frees a listint_t list and sets head to NULL
 * @head: double pointer to singly linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	nodePtr temp1, temp2;

	temp1 = (*head)->next;
	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	free(*head);
	(*head) = NULL;
}
