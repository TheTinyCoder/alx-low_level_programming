#include <stdio.h>
#include "main.h"

/**
 * jack_bauer -  function entry-point
 *
 * Description: 'prints every minute of the day'
 * No parameters hence void
 * Return: void
 */

void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 48; w < 51; w++)
	{
		for (x = 48; x < 58; x++)
		{
			for (y = 48; y < 54; y++)
			{
				for (z = 48; z < 58; z++)
				{
					if (w <= 50 && x < 52)
					{
						_putchar(w);
						_putchar(x);
						_putchar(':');
						_putchar(y);
						_putchar(z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
