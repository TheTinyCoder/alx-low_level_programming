#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function entry-point
 *
 * Description: reallocates memory using malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	return (ptr);
}
