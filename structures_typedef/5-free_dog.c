#include "dog.h"

/**
 * free_dog - frees a memory block of type dog_t
 * @d: pointer to the dog_t to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
