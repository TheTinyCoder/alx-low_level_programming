#include "main.h"

/**
 * puts2 - function entry-point
 *
 * Description: prints every other character of a string
 * @str: pointer to string (char array)
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(str[x]);

		if (str[x + 1] == '\0')
			break;
		x += 2;
	}

	_putchar('\n');
}
