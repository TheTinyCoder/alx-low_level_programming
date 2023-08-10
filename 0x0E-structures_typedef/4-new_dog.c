#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function entry-point
 *
 * Description: creates a new variable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 * Return: pointer to a struct of type dog_t:dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy, *owner_copy;
	int i = 0, j = 0, k;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (; name[i]; i++)
		;
	for (; owner[j]; j++)
		;
	name_copy = malloc(sizeof(char) * (i + 1));
	owner_copy = malloc(sizeof(char) * (j + 1));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy), free(owner_copy), free(newDog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		name_copy[k] = name[k];
	for (k = 0; k <= j; k++)
		owner_copy[k] = owner[k];
	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;
	return (newDog);
}
