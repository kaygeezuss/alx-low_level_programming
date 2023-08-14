#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function frees memory allocated for a struct dog
 * @d: Indicates struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
