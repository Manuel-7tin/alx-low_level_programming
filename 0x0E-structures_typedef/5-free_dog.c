#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory occupied by a struct
 *
 * @d: The struct to free
 *
 * Description: Completely frees the memory where an inputted struct is stored
 * Return: void
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
