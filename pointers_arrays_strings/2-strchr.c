#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: pointer to the null-terminated string to search
 * @c: character to locate (as an unsigned char)
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (NULL);
}
