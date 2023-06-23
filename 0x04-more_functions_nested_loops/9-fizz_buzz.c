#include "main.h"
#include <stdio.h>

/**
 * main - function entrypoint
 *
 * Description: fizz-buzz
 * No parameters hence void
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			fprintf(stdout, "FizzBuzz");
		else if (i % 3 == 0)
			fprintf(stdout, "Fizz");
		else if (i % 5 == 0)
			fprintf(stdout, "Buzz");
		else
			fprintf(stdout, "%d", i);

		if (i != 100)
			fprintf(stdout, " ");
	}
	fprintf(stdout, "\n");

	return (0);
}
