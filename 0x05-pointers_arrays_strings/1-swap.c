#include "main.h"

/**
 * swap_int - function entry-point
 *
 * Description: swaps the values of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
