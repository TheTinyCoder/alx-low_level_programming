#include "function_pointers.h"

/**
 * int_index - function entry-point
 *
 * Description: searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: function to compare values
 * Return: index of the first element found or -1 if none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
