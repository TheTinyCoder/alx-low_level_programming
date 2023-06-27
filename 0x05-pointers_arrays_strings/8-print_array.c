#include "main.h"
#include <stdio.h>
/**
 * print_array - function entry-point
 *
 * Description: prints 'n' elements of array 'a'
 * @a: int array
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x + 1 != n)
			printf(", ");
		x++;
	}

	printf("\n");
}
