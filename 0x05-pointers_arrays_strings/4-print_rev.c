#include "main.h"

/**
 * print_rev - function entry-point
 *
 * Description: prints a string in reverse
 * @s: pointer to string (char array)
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	for (x--; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar('\n');
}
