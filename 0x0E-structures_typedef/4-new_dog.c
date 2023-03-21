#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Takes in three parameters to create a struct about dogs
 * Return: pointer to new struct
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(1 + sizeof(name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = malloc(1 + sizeof(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	new_dog->owner = owner;
	return (new_dog);
}
