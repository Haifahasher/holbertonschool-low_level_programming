#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: pointer to the string to modify
 *
 * Description:
 *   Iterates over each character. If its between 'a' and 'z',
 *   converts it by subtracting ('a' - 'A').
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *s)
{
char *p = s;

while (*p)
{
if (*p >= 'a' && *p <= 'z')
*p = *p - ('a' - 'A');
p++;
}

return (s);
}
