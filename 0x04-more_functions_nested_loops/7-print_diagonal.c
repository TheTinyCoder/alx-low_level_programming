#include "main.h"

/**
 * print_diagonal - function entrypoint
 *
 * Description: draws a diagonal line in the terminal
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		if (n != 1)
			_putchar('\n');
		n--;
		i++;
	}
	_putchar('\n');
}
