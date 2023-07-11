#include <stdio.h>
#include "main.h"

/**
 * main -  function entry-point
 *
 * Description: 'prints the first 98 Fibonacci numbers followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	unsigned long int v = 1, w = 2, x = 2;

	while (x <= 98)
	{
		fprintf(stdout, "%lu, ", v);
		fprintf(stdout, "%lu", w);

		if (x != 98)
			fprintf(stdout, ", ");
		v += w;
		w += v;
		x += 2;
	}

	fprintf(stdout, "\n");
	return (0);
}
