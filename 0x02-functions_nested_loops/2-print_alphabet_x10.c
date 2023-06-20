#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  function entry-point
 *
 * Description: 'prints alphabet in lowercase x10 followed by \n'
 * No parameters hence void
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
			if (x == 122)
				_putchar('\n');
		}
	}
}
