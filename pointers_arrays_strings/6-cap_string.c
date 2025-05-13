#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
int i = 0;
int capitalize = 1;

while (s[i])
{
if (capitalize && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
capitalize = 0;
}
else if (!(s[i] >= 'A' && s[i] <= 'Z'))
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
capitalize = 1;
}
}
else
{
capitalize = 0;
}
i++;
}
return (s);
}
