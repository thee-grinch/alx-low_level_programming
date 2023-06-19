#include "dog.h"
/**
 * init_dog - the dog
 * @d: the dog initialiser
 * @name: the dogs name
 * @age: the dogs age
 * @owner: the dogs owwner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name  = name;
	d->age = age;
	d->owner = owner;
}
