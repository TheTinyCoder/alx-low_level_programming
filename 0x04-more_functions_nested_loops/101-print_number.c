#include "main.h"
#include <limits.h>

/**
 * print_number - function entrypoint
 *
 * Description: prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int i = 1, j = 0, k;

	if (n == INT_MIN)
	{
		j = 1;
		n += j;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}

	k = n;
	while (k > 9)
	{
		k /= 10;
		i *= 10;
	}

	while (i > 1)
	{
		_putchar((n / i) + 48);
		n %= i;
		i /= 10;
	}
	if (j == 1)
		_putchar(56);
	else
		_putchar(n + 48);

}
