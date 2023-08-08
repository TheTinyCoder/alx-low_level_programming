#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - function entry-point
 *
 * Description: checks if all values in array are numbers
 * @arr: array
 * Return: length of array or 1 (if digit is 0), 0 otherwise
 */

int is_digit(char *arr)
{
	int i = 0;

	for (; arr[i]; i++)
	{
		if (arr[i] < 48 || arr[i] > 57)
			return (0);
	}
	/*
	 * if (arr[0] == 0)
		return (1);
		*/
	return (i);
}


/**
 * multiply_matrix - function entry-point
 *
 * Description: multiplies 2D matrix
 * @a: integer array
 * @b: integer array
 * @a_c: length of a
 * @b_d: length of b
 * Return: result of multiplication
 */

int **multiply_matrix(int *a, int *b, int a_c, int b_d)
{
	int index_a, index_b = b_d - 1, temp = 0, tens, **w, x, y, z;

	w = malloc(sizeof(int *) * b_d);
	if (w == NULL)
		return (NULL);
	for (x = 0; x < b_d; x++)
	{
		w[x] = malloc(sizeof(int) * (a_c + b_d));
		if (w[x] == NULL)
		{
			for (; x >= 0; x--)
				free(w[x]);
			free(w);
			return (NULL);
		}
	}
	for (x = 0; x < b_d; x++)
	{
		index_a = a_c - 1, tens = 1;
		for (y = a_c + b_d - 1; y >= 0; y--)
		{
			if (index_a < 0)
			{
				if (temp > 0)
					w[x][y] = temp;
				break;
			}
			if (x > 0 && tens == 1)
			{
				for (z = x; z > 0; z--)
					w[x][y] = 0, y--;
				tens = 0;
			}
			w[x][y] = ((a[index_a] * b[index_b]) + temp) % 10;
			temp = (a[index_a] * b[index_b]) / 10;
			index_a--;
		}
		index_b--;
	}
	return (w);
}


/**
 * sum_matrix - function entry-point
 *
 * Description: sums up 2D matrix
 * @matrix: 2D integer array
 * @width: columns of matrix
 * @height: rows of matrix
 * Return: result of multiplication
 */

int *sum_matrix(int **matrix, int width, int height)
{
	int *a, temp = 0, w, x, y, z;

	a = malloc(sizeof(int) * width);
	if (a == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
		a[w] = matrix[0][w];
	for (x = 1; x < height; x++)
	{
		for (y = width - 1; y >= 0; y--)
		{
			z = (a[y] + matrix[x][y] + temp);
			a[y] = z % 10;
			temp = z / 10;
		}
	}
	return (a);
}


/**
 * print_array - function entry-point
 *
 * Description: prints an array
 * @arr: array
 * @size: length of array
 * Return: void
 */

void print_array(int *arr, int size)
{
	int e;

	for (e = 0; e < size; e++)
	{
		if (arr[e] == 0 && e == 0 && arr[e + 1] != 0)
			continue;
		printf("%d", arr[e]);
	}
	printf("\n");

}


/**
 * main - function entry-point
 *
 * Description: multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0, *c, *d, e, f, g, **result, *sum_result;

	if (argc != 3)
		printf("Error\n"), exit(98);
	if (!is_digit(argv[1]))
		printf("Error\n"), exit(98);
	if (!is_digit(argv[2]))
		printf("Error\n"), exit(98);
	if (argv[1][0] == 48 || argv[2][0] == 48)
		printf("0\n"), exit(0);
	a = is_digit(argv[1]), b = is_digit(argv[2]), g = a + b;
	c = malloc(sizeof(int) * a), d = malloc(sizeof(int) * b);
	if (c == NULL || d == NULL)
	{
		free(c), free(d);
		printf("Error\n");
		exit(98);
	}
	for (e = 0; e < a; e++)
	{
		c[e] = (argv[1][e] - 48);
	}
	for (f = 0; f < b; f++)
	{
		d[f] = (argv[2][f] - 48);
	}
	result = a > b ? multiply_matrix(c, d, a, b) : multiply_matrix(d, c, b, a);
	sum_result = a > b ? sum_matrix(result, g, b) : sum_matrix(result, g, a);
	print_array(sum_result, g);
	g = a > b ? b : a;
	for (f = 0; f < g; f++)
		free(result[f]);
	free(c), free(d), free(result), free(sum_result);
	return (0);
}
