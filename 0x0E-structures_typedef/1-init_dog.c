#include "dog.h"

/**
 * init_dog - Creates struct about dog
 *
 * @d: Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Takes in certain pieces of data to modify the dog struct
 * Return: void
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
