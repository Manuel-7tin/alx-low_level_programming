#include "dog.h"

/**
 * print_dog - Prints from a dog struct
 *
 * @d: The struct to print from
 *
 * Description: Prints out all the info in an inputted struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->age == NULL)
			d->age = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)"
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
