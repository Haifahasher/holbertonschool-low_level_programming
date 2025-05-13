#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
char *letters = "aAeEoOtTlL";
char *repl    = "4433007711";
char *p = str;
int i;

while (*p)
{
for (i = 0; letters[i]; i++)
if (*p == letters[i])
{
*p = repl[i];
break;
}
p++;
}
return (str);
}
