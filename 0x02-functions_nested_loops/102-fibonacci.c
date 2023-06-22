#include <stdio.h>
#include "main.h"

/**
 * main -  function entry-point
 *
 * Description: 'prints the first 50 Fibonacci numbers followed by \n'
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	long int v = 1, w = 2, x;

	for (x = 1; x < 26; x++)
	{
		fprintf(stdout, "%lu, ", v);
		fprintf(stdout, "%lu", w);
		if (x != 25)
			fprintf(stdout, ", ");
		v += w;
		w += v;
	}

	return (0);
}
