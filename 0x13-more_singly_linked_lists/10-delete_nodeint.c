#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * delete_nodeint_at_index - function entry-point
 *
 * Description: deletes node at index n of a listint_t list
 * @head: double pointer to singly linked list
 * @index: index to delete node from
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	nodePtr temp1, temp2;
	unsigned int i = 0;

	if (index == 0 && *head)
	{
		temp1 = *head, *head = (*head)->next, free(temp1);
		return (1);
	}
	temp1 = *head;
	while (temp1 && i < index)
	{
		if (i == index - 1)
		{
			temp2 = temp1->next;
			temp1->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp1 = temp1->next;
		i++;
	}
	return (-1);
}
