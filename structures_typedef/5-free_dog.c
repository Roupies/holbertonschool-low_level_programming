#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: the dog we will freed
 */

void free_dog(dog_t *d)
{

if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
