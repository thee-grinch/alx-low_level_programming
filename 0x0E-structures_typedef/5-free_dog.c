#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - fres a dog
 * @d: the struct
 */
void free_dog(dog_t *d)
{
	while (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
