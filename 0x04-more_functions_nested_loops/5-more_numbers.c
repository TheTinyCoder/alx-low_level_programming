#include "main.h"

/**
 * more_numbers - function entrypoint
 *
 * Description: prints from 0 to 14, followed by a new line
 * No parameter hence void
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + 48);

			_putchar((i % 10) + 48);
		}

		_putchar('\n');
	}
}
