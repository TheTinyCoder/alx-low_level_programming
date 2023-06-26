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

	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
}
