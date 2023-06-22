#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  function entry-point
 *
 * Description: 'prints the n times table starting with 0'
 * @n: integer
 * Return: void
 */

void print_times_table(int n)
{
	int spaces, v, w, x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (z = 0; z <= n; z++)
			{
				v = y * z, w = 1;
				while (v > 9)
				{
					w *= 10, v /= 10;
				}
				v = y * z;
				x = y * (z + 1);
				if (x < 10)
					spaces = 3;
				if (x > 9 && x < 100)
					spaces = 2;
				while (w > 1)
				{
					_putchar((v / w) + 48);
					v -= (v / w) * w, w /= 10;
				}
				_putchar(v + 48);
				if (z == n)
				{
					_putchar('\n');
					break;
				}
				_putchar(',');
				_putchar(' ');
				if (spaces == 3)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (spaces == 2)
					_putchar(' ');
			}
		}
	}
}
