#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: the pointer new_dog if the function is successful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name = NULL;
	char *new_owner = NULL;
	dog_t *new_dog = NULL;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = strdup(name);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = strdup(owner);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
