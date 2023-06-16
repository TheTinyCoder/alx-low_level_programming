#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints two double digit combinations followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int m, n, p, q, r, s;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			for (p = m; p < 58; p++)
			{
				for (q = 48; q < 58; q++)
				{
					r = (m * 10) + n;
					s = (p * 10) + q;
					if (r < s)
					{
						putchar(m);
						putchar(n);
						putchar(' ');
						putchar(p);
						putchar(q);
						putchar(',');
						putchar(' ');
					}
					if (r == 98 && s == 99)
					{
						putchar('\n');
						break;
					}
				}
			}
		}
	}
	return (0);
}
