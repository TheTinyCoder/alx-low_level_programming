#include <stdio.h>
#include <math.h>
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
	unsigned long int  v = 1, v1 = 0, w = 2, w1 = 0, x = 2, y;

	y = (unsigned long int) pow(10, 19);
	while (x <= 98)
	{
		if (v1 > 0)
			fprintf(stdout, "%lu", v1);
		fprintf(stdout, "%lu, ", v);
		if (w1 > 0)
			fprintf(stdout, "%lu", w1);
		fprintf(stdout, "%lu", w);

		if (x != 98)
			fprintf(stdout, ", ");
		v = (v % y) + (w % y);
		v1 += (v / y) + (w / y) + w1;
		v %= y;

		w = (w % y) + v;
		w1 += (w / y) + (v / y) + v1;
		w %= y;
		x += 2;
	}

	fprintf(stdout, "\n");
	return (0);
}
