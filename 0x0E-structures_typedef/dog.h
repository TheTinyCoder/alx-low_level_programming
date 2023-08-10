#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure entry-point
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: struct that holds dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
