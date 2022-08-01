#include "dog.h"
#include<stdlib.h>

/**
 * free_dog - frees a dog pointer
 * @d: dog pointer
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
