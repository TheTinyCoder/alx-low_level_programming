#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function entry-point
 *
 * Description: frees memory allocated to struct of type dog
 * @d: struct of type dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d->name), free(d->owner), free(d);
}
