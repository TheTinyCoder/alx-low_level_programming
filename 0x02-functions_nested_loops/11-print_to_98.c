#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 -  function entry-point
 *
 * Description: 'prints from n to 98'
 * @n: integer
 * Return: addition result
 */

void print_to_98(int n)
{
	int w, x, y, z;

	if (n <= 98)
	{
		for (y = n; y < 99; y++)
		{
			x = abs(y);
			w = 1;
			while (x > 9)
			{
				w *= 10;
				x /= 10;
			}
			x = y;
			while (w > 1)
			{
				z = x / w;
				if (y < 0)
					_putchar(45);
				
				_putchar(abs(z) + 48);
				x -= (z * w); 
				w /= 10;
			}
			if (y < 0 && y > -10)
				_putchar(45);
			_putchar(abs(x) + 48);
			if (y == 98)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');

		}
	}
	if (n > 98)
	{
		for (y = n; y > 97; y--)
		{
			x = y;
			w = 1;
			while (x > 9)
			{
				w *= 10;
				x /= 10;
			}
			x = y;
			while (w > 1)
			{
				z = x / w;
				_putchar(z + 48);
				x -= (z * w); 
				w /= 10;
			}
			_putchar(x + 48);
			if (y == 98)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');

		}
	}
}
