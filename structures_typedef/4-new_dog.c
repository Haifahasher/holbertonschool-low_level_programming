#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name:  name of the dog
 * @age:   age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char  *nname, *nowner;
int    len, i;

if (name == NULL || owner == NULL)
return (NULL);

d = malloc(sizeof(*d));
if (d == NULL)
return (NULL);

for (len = 0; name[len]; len++)
;
nname = malloc(len + 1);
if (nname == NULL)
{
free(d);
return (NULL);
}
for (i = 0; name[i]; i++)
nname[i] = name[i];
nname[i] = '\0';

for (len = 0; owner[len]; len++)
;
nowner = malloc(len + 1);
if (nowner == NULL)
{
free(nname);
free(d);
return (NULL);
}
for (i = 0; owner[i]; i++)
nowner[i] = owner[i];
nowner[i] = '\0';

d->name  = nname;
d->age   = age;
d->owner = nowner;
return (d);
}
