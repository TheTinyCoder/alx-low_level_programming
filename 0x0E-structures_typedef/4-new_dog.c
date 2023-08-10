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
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
