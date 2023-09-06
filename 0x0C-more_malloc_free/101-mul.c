#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * digit_len - function entry-point
 *
 * Description: finds length of number
 * @arr: string array of numbers
 * Return: length of number, 0 if one of the values is not a digit
 */

int digit_len(char *arr)
{
	int i = 0;

	for (; arr[i]; i++)
	{
		if (arr[i] < 48 || arr[i] > 57)
			return (0);
	}
	return (i);
}


/**
 * allocate - function entry-point
 *
 * Description: allocates memory of input size
 * @size: size of int array to allocate
 * Return: address pointing to memory allocated or NULL on failure
 */

int *allocate(int size)
{
	int *i;

	i =  malloc(sizeof(int) * size);
	if (i == NULL)
		return (NULL);
	return (i);
}


/**
 * mul - function entry-point
 *
 * Description: multiplies numbers
 * @num1: number (as int array)
 * @num1_len: length of num1
 * @num2: number (as int array)
 * @num2_len:length of num2
 * Return: pointer to matrix result of product
 */

int **mul(int *num1, int num1_len, int *num2, int num2_len)
{
	int **matrix, temp, width = num2_len + num1_len, x, y, z;
	int index_1, index_2 = num2_len - 1, place_value;

	matrix = malloc(sizeof(int *) * num2_len);
	if (matrix == NULL)
		return (NULL);
	for (x = 0; x < num2_len; x++)
	{
		matrix[x] = malloc(sizeof(int) * width);
		if (matrix[x] == NULL)
		{
			for (; x >= 0; x--)
				free(matrix[x]);
			free(matrix);
			return (NULL);
		}
		place_value = 1, temp = 0, index_1 = num1_len - 1;
		for (y = width - 1; y >= 0; y--)
		{
			if (index_1 < 0 && temp > 0)
				matrix[x][y] = temp, temp = 0;
			else if (index_1 < 0)
				matrix[x][y] = 0;
			if (x > 0 && place_value == 1)
			{
				for (z = x; z > 0; z--)
					matrix[x][y] = 0, y--;
				place_value = 0;
			}
			if (index_1 >= 0)
			{
				matrix[x][y] = ((num1[index_1] * num2[index_2]) + temp) % 10;
				temp = (num1[index_1] * num2[index_2]) / 10;
			}
			index_1--;
		}
		index_2--;
	}
	return (matrix);
}


/**
 * _sum - function entry-point
 *
 * Description: sums matrix arrays and prints result
 * @matrix: pointer to int arrays
 * @width: columns of matrix
 * @height: rows of matrix
 * Return: void
 */

void _sum(int **matrix, int width, int height)
{
	int *sum, temp = 0, x, y, z;

	sum = allocate(width + height);
	for (x = 0; x < width + height; x++)
		sum[x] = 0;
	for (y = 0; y < height; y++)
	{
		for (z = width + height - 1; z >= 0; z--)
		{
			x = sum[z] + matrix[y][z] + temp;
			sum[z] = x % 10;
			temp = x / 10;
		}
	}
	for (z = 0; z < width + height; z++)
	{
		if (sum[z] == 0 && z == 0)
			continue;
		printf("%d", sum[z]);
	}
	printf("\n");
	free(sum);
}


/**
 * main - function entry-point
 *
 * Description: multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: product result
 */

int main(int argc, char **argv)
{
	int num1_len = 0, num2_len = 0, **mul_result, *num1, *num2, x, y;

	if (argc != 3)
		printf("Error\n"), exit(98);
	if (argv[1][0] == 48 || argv[2][0] == 48)
		printf("0\n"), exit(0);
	num1_len = digit_len(argv[1]), num2_len = digit_len(argv[2]);
	if (num1_len == 0 || num2_len == 0)
		printf("Error\n"), exit(98);
	num1 = allocate(num1_len), num2 = allocate(num2_len);
	for (x = 0; x < num1_len; x++)
		num1[x] = argv[1][x] - 48;
	for (x = 0; x < num2_len; x++)
		num2[x] = argv[2][x] - 48;
	mul_result = num1_len > num2_len ? mul(num1, num1_len, num2, num2_len)
		: mul(num2, num2_len, num1, num1_len);
	num1_len > num2_len ? _sum(mul_result, num1_len, num2_len)
		: _sum(mul_result, num2_len, num1_len);
	y = num1_len < num2_len ? num1_len : num2_len;
	for (x = 0; x < y; x++)
		free(mul_result[x]);
	free(mul_result), free(num1), free(num2);
	return (0);
}
