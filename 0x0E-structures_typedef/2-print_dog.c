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
	if (d == NULL)
		printf("Name: (nil)\nAge: (nil)\nOwner: (nil)\n");
	else
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
		d->owner == NULL ?
			printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
}
