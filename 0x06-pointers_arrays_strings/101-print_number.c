#include "main.h"
#include <limits.h>

/**
 * print_number -  function entry-point
 *
 * Description: 'prints an integer'
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int i = 0, j = 0, k = 1;

	if (n == INT_MIN)
	{
		j = 1;
		n += 1;
	}

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	for (i = n; i > 9; i /= 10)
		k *= 10;
	while (k > 1)
	{
		_putchar((n / k) + 48);
		n %= k;
		k /= 10;
	}
	if (j == 1)
		_putchar(56);
	else
		_putchar(n + 48);
}
