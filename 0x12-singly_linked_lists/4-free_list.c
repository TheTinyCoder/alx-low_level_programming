#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * free_list - function entry-point
 *
 * Description: frees a list_t list
 * @head: pointer to singly linked list
 * Return: void
 */

void free_list(list_t *head)
{
	nodePtr temp1, temp2;

	temp1 = head;

	while (temp1 != NULL)
	{
		free(temp1->str);
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
}
