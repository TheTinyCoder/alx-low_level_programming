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

	for (n = 122; n > 96; n--)
	{
		putchar(n);
		if (n == 97)
		putchar('\n');
	}
	return (0);
}
