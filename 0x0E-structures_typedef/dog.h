#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the struct dog
 * @D: pointer to struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 */
void init_dog(struct dog *D, char *name, float age, char *owner)
{
	if (D != NULL)
	{
		D->name = name;
		D->age = age;
		D->owner = owner;
	}
}
