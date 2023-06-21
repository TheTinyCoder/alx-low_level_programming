#include <stdio.h>
#include "main.h"

/**
 * times_table -  function entry-point
 *
 * Description: 'prints the 9 times table starting with 0'
 * No parameters hence void
 * Return: void
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (z < 10)
			{
				_putchar(' ');
				_putchar(z + 48);
			}
			else
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 9)
			{
				_putchar('\n');
			}
		}
	}
}
