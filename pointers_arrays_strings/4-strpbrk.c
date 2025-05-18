#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing bytes to match
 * Return: pointer to the first matching byte in s, or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
