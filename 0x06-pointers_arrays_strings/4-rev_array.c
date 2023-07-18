#include "main.h"

/**
 * reverse_array -  function entry-point
 *
 * Description: 'reverses the content of an array of integers'
 * @a: integer
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int r, s = n - 1, temp;

	for (r = 0; r < s; r++)
	{
		temp = a[r];
		a[r] = a[s];
		a[s] = temp;
		s--;
	}
}
