#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * nodePtr - Typedef for struct listint_s
 */
typedef struct listint_s *nodePtr;
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	nodePtr next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
