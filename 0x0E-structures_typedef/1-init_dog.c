#include "dog.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: string fothe name of dog
 * @age: float variable for the dog's age
 * @owner: string for the ame of the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
