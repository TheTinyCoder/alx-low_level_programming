#include "main.h"

/**
 * print_triangle - function entrypoint
 *
 * Description: draws a triangle in the terminal
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int i = size, j, k = 1, l;

	while (size > 0)
	{
		j = i - 1;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}

		l = k;
		while (l > 0)
		{
			_putchar('#');
			l--;
		}
		if (size != 1)
			_putchar('\n');
		size--;
		i--;
		k++;
	}
	_putchar('\n');
}
