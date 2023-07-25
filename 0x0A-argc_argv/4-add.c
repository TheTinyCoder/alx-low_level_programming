#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry-point
 * Description: adds arguments passed, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 on success, 1 if error
 */

int main(int argc, char *argv[])
{
	long int a, b, c = 0;
	char *temp;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		b = strtol(argv[a], &temp, 10);
		if (*temp != '\0')
		{
			printf("Error\n");
			return (1);
		}
		c += b;
	}
	printf("%ld\n", c);
	return (0);
}
