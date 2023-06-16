#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints base 16 numbers followed by a newline'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (n = 97; n < 103; n++)
	{
		putchar(n);
		if (n == 102)
			putchar('\n');
	}
	return (0);
}
