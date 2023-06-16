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

	for (n = 97; n < 121; n++)
	{
		putchar(n);
		if (n == 120)
		putchar('\n');
	}
	return (0);
}
