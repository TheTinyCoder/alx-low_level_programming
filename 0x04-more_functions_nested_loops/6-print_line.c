#include "main.h"

/**
 * print_line - function entrypoint
 *
 * Description: draws a straight line in the terminal
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
