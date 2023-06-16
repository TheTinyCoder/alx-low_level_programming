#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints numbers from 0 to 9 followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
			putchar('\n');
	}
	return (0);
}
