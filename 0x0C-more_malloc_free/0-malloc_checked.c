#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function entry-point
 *
 * Description: allocates memory using malloc
 * @b: allocation size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
