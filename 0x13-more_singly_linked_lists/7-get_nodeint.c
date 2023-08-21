#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * get_nodeint_at_index - function entry-point
 *
 * Description: gets nth node of a listint_t list
 * @head: pointer to singly linked list
 * @index: index of the nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	nodePtr temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
	}
	return (temp);
}
