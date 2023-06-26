#include "main.h"

/**
 * puts_half - function entry-point
 *
 * Description: prints other half of a string
 * @str: pointer to string (char array)
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0, y;

	while (*(str + x) != '\0')
	{
		x++;
	}

	y = (x - 1) / 2;

	if (x % 2 != 0)
		y++;

	for (y++; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
