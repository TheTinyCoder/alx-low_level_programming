#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function entry-point
 *
 * Description: creates array of chars & initializes with specific char
 * @size: size of array
 * @c: char to initialize
 * Return: NULL if size is 0, pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size <= 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);
	for (i = 0;i < size; i++)
		a[i] = c;
	return (a);
}
