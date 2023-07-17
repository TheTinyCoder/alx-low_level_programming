#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - function entrypoint
 *
 * Description: prints the largest prime factor of the number 612852475143
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	long int l, m, n = 612852475143;

	while (n % 3 == 0)
	{
		m = 3;
		n /= 3;
	}

	for (l = 5; l <= sqrt(n); l += 6)
	{
		while (n % l == 0)
		{
			m = l;
			n /= l;
		}
		while (n % (l + 2) == 0)
		{
			m = (l + 2);
			n /= (l + 2);
		}
	}

	if (n > 4)
		m = n;

	printf("%ld\n", m);
	return (0);
}
