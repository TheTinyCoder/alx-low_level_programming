#include <stdio.h>
#include <stdlib.h>
#include "../dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *name = "Ghost";
    char *owner = "Jon Snow";
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free(my_dog->name), free(my_dog->owner), free(my_dog);
    my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    if (my_dog == NULL)
    {
	    printf("Failed\n");
	    free(my_dog->name), free(my_dog->owner), free(my_dog);
	    return (1);
    }
    printf("My name is %s, I am %.2f, and my owner is %s\n",
		    my_dog->name, my_dog->age, my_dog->owner);
    free(my_dog->name), free(my_dog->owner), free(my_dog);
    my_dog = new_dog(name, 4.75, owner);
    if (my_dog == NULL)
    {
	    printf("Failed\n");
	    free(my_dog->name), free(my_dog->owner), free(my_dog);
	    return (1);
    }
    if (my_dog->name == name || my_dog->owner == owner)
    {
	    printf("Duplicated strings should be stored in the allocated structure.\n");
	    free(my_dog->name), free(my_dog->owner), free(my_dog);
	    return (1);
    }
    printf("My name is %s, I am %.2f, and my owner is %s\n",
		    my_dog->name, my_dog->age, my_dog->owner);
    free(my_dog->name), free(my_dog->owner), free(my_dog);
    return (0);
}
