#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints alphabet in lowercase followed by a newline'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
		if (n == 122)
		putchar('\n');
	}
	return (0);
}
