#include "lists.h"
#include "stdio.h"
#include "string.h"

/**
 * reverse_listint - function entry-point
 *
 * Description: reverses a listint_t linked list
 * @head: double pointer to singly linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	nodePtr new_head = NULL, temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = new_head;
		new_head = temp;
	}
	*head = new_head;
	return (*head);
}
