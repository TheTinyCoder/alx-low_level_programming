#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints triple digit combinations followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int m, n, p;

	for (m = 48; m < 58; m++)
	{
		for (n = m + 1; n < 58; n++)
		{
			for (p = n + 1; p < 58; p++)
			{
				putchar(m);
				putchar(n);
				putchar(p);
				if (m == 55 && n == 56 && p == 57)
				{
					putchar('\n');
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
