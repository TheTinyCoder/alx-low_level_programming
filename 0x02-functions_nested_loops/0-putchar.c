#include <stdio.h>
#include "main.h"

/**
 * main - function entry-point
 *
 * Description: 'prints _putchar followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int x;
	char y[] = "_putchar";

	for (x = 0; y[x] != '\0'; x++)
	{
		_putchar(y[x]);
		if (y[x] == 'r')
			_putchar('\n');
	}

	return (0);
}
