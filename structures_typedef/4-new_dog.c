#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Create a new dog_t instance
 * @name:  name for the new dog (copied)
 * @age:   age for the new dog
 * @owner: owner for the new dog (copied)
 *
 * Return: pointer to the newly allocated dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nd;
char *name_copy, *owner_copy;
size_t len;


if (name == NULL || owner == NULL)
return (NULL);


nd = malloc(sizeof(*nd));
if (nd == NULL)
return (NULL);


len = strlen(name);
name_copy = malloc(len + 1);
if (name_copy == NULL)
{
free(nd);
return (NULL);
}
strcpy(name_copy, name);


len = strlen(owner);
owner_copy = malloc(len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(nd);
return (NULL);
}
strcpy(owner_copy, owner);


nd->name  = name_copy;
nd->age   = age;
nd->owner = owner_copy;

return (nd);
}
