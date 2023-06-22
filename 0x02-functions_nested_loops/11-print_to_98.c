#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 -  function entry-point
 *
 * Description: 'prints from n to 98'
 * @n: integer
 * Return: void
 */

void print_to_98(int n)
{
	int v, w, x, y, z;

	z = (n > 98) ? 97 : 99;

	v = n;
	while (v != z)
	{
		w = 1;
		x = abs(v);
		while (x > 9)
		{
			w *= 10;
			x /= w;
		}
		if (v < 0)
			_putchar(45);
		x = v;
		while (w > 1)
		{
			y = x / w;
			_putchar(abs(y) + 48);
			x -= (y * w);
			w /= 10;
		}
		_putchar(abs(x) + 48);
		if (v == 98)
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(' ');

		if (z == 99)
			v++;
		else
			v--;
	}
}
