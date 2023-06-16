#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints double digit combinations followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		n = m + 1;
		while (n < 58)
		{
			putchar(m);
			putchar(n);
			if (m == 56 && n == 57)
			{
				putchar('\n');
				break;
			}

			putchar(',');
			putchar(' ');
			n++;
		}
	}
	return (0);
}
