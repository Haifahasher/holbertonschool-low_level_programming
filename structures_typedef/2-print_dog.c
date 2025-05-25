#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the contents of a struct dog
 * @d: pointer to struct dog to print
 *
 * If d is NULL, does nothing. If name or owner is NULL,
 * prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
