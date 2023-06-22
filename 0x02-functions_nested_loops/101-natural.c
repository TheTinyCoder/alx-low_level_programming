#include "main.h"

/**
 * main -  function entry-point
 *
 * Description: 'prints sum of multiples of 3/5 below 1024 followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int v, w, x, y, z = 0;

	for (x = 1023; x > 0; x--)
	{
		if (x % 3 == 0 || x % 5 == 0)
			z += x;
	}

	v = z, w = 1;
	while (v > 9)
	{
		w *= 10;
		v /= 10;
	}

	while (w > 1)
	{
		y = z / w;
		_putchar(y + 48);
		 z -= y * w;
	}
	_putchar(z + 48);
	_putchar('\n');

	return 0;
}
