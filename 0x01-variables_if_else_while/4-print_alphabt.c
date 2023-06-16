#include <stdio.h>

/**
 * main - function entry-point
 *
 * Description: 'prints alphabet in lowercase except q & e followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
		if (n == 122)
			putchar('\n');
	}
	return (0);
}
