#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * free_listint - function entry-point
 *
 * Description: frees a listint_t list
 * @head: pointer to singly linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	nodePtr temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
