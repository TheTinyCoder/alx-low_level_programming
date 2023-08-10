#include "dog.h"
#include <stdlib.h>

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
	int i = 0, j = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (; name[i]; i++)
		;
	for (; owner[j]; j++)
		;

	name_copy = malloc(sizeof(char) * i);
	owner_copy = malloc(sizeof(char) * j);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy), free(owner_copy), free(newDog);
		return (NULL);
	}
	newDog->name = name_copy;
	for (i = 0; name[i]; i++)
		name_copy[i] = name[i];
	for (i = 0; owner[i]; i++)
		owner_copy[i] = owner[i];
	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;
	return (newDog);
}
