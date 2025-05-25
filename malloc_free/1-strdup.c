#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL on failure or if str is NULL
 */
char *_strdup(char *str)
{
unsigned int len = 0, i;
char *dup;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup[i] = str[i];

return (dup);
}
