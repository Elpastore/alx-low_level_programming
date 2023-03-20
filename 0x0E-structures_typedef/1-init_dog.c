#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the pointer
 * @name: the name of dog
 * @age: the age of the dog
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
