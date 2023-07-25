#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry-point
 * Description: prints the minimum no. of coins to make change from cash
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 on success, 1 if error
 */

int main(int argc, char *argv[])
{
	int a [] = {25, 10, 5, 2, 1}, b, c, d = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (b = 0; b < 5; b++)
	{
		if (c == 1)
		{
			d += 1;
			break;
		}
		while (c >= a[b])
		{
			d += (c / a[b]);
			c %= a[b];
		}
	}
	printf("%d\n", d);
	return (0);
}
