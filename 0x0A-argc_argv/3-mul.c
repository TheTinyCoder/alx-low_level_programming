#include <stdio.h>

/**
 * main - function entry-point
 * Description: multiplies arguments passed, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 on success, 1 if error
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", ((*argv[1] - 48) * (*argv[2] - 48)));
	return (0);
}
