#include <stdio.h>
#include "main.h"

/**
 * main - function entry-point
 *
 * Description: 'prints alphabet in lowercase followed by \n'
 * No parameters hence void
 * Return: void
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		_putchar(x);
		if (x == 122)
			_putchar('\n');
	}
}
