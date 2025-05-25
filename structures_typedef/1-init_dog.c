#include "dog.h"

/**
 * init_dog - Initialize a dog_t variable
 * @d:     pointer to a dog_t
 * @name:  name to assign
 * @age:   age to assign
 * @owner: owner to assign
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
