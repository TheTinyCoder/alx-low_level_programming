#include <stdio.h>
#include "main.h"

/**
 * main -  function entry-point
 *
 * Description: 'prints sum of even Fibonacci numbers followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	long int v = 1, w = 2, x = 0;

	while (v < 4000000)
	{
		if (v % 2 == 0)
			x += v;
		if (w % 2 == 0)
			x += w;

		v += w;
		w += v;
	}

	fprintf(stdout, "%lu\n", x);

	return (0);
}
