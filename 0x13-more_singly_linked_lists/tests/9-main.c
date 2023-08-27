#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head, *head1, *n;

    head = head1 = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    free_listint2(&head);

    n = insert_nodeint_at_index(&head1, 0, 98);
    if (n)
            printf("-> %d\n", n->n);
    else
            printf("(nil)\n");
    print_listint(head1);
    free_listint2(&head1);
    return (0);
}
