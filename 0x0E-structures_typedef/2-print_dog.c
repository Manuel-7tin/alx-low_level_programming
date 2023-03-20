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
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
