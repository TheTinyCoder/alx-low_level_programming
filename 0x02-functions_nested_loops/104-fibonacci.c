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
	unsigned int v = 1, w = 2, x = 2;

	while (x <= 96)
	{
		fprintf(stdout, "%u, ", v);
		fprintf(stdout, "%u", w);

		if (x != 96)
			fprintf(stdout, ", ");
		v += w;
		w += v;
		x += 2;
	}

	fprintf(stdout, "\n");
	return (0);
}
