#include <stdio.h>
#include <stdlib.h>

/**
 * main - function entry-point
 *
 * Description: prints the opcodes of its own main function
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
		printf("Error\n"), exit(1);
	if (atoi(argv[1]) < 0)
		printf("Error\n"), exit(2);
	j = atoi(argv[1]) - 1;
	for (i = 0; i <= j; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < j)
			printf(" ");
	}
	printf("\n");
	return (0);
}
