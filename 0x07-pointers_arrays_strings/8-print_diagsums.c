#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function entry-point
 *
 * Description: 'prints sum of the 2 diagonals of square matrix of integers'
 * @a: pointer to array of integer arrays
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i <= (size - 1) * (size + 1); i += (size + 1))
	{
		j += a[i];
	}

	for (i = (size - 1); i <= (size - 1) * size; i += (size - 1))
	{
		k += a[i];
	}

	printf("%d, %d\n", j, k);
}
