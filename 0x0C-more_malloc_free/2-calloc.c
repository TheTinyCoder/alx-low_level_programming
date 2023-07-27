#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function entry-point
 *
 * Description: allocates memory for an array
 * @nmemb: no. of elements in array
 * @size: byte size of type of elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	return (s);
}
