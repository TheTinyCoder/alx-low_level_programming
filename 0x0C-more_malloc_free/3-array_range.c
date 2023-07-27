#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function entry-point
 *
 * Description: creates an array of integers
 * @min: start of range
 * @max: end of range
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *s, t, v = min;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (t = 0; t <= (max - min); t++)
	{
		s[t] = v;
		v++;
	}
	return (s);
}
