#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function entry-point
 *
 * Description: prints a variable of type struct dog
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	d->name == NULL ? printf("Name: (nil)") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)") : printf("Owner: %s\n", d->owner);
}
