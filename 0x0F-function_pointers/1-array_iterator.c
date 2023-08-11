#include "function_pointers.h"

/**
 * array_iterator - function entry-point
 *
 * Description: runs a function on every element of array
 * @array: integer array
 * @size: size of array
 * @action: function to run
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
