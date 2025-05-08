#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: number of characters before the null-terminator
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
i++;
return (i);
}
