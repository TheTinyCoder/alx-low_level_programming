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
	long int i = 1, j = 0, k = 0, l = 612852475143;

	while (i < (long int)sqrt((long double)l))
	{
		k = (i * 6);
		if (l % (k - 1) == 0)
		{
			j = (k - 1);
		}
		if (l % (k + 1) == 0)
		{
			j = (k + 1);
		}
		i++;
	}

	printf("%ld\n", j);

	return (0);
}
