#include "main.h"

/**
 * _puts - function entry-point
 *
 * Description: prints a string
 * @str: pointer to string (char array)
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}

	_putchar('\n');
}
