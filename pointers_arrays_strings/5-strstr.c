#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in a string
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to find
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (*needle == '\0')
return (haystack);
while (*haystack)
{
h = haystack;
n = needle;
while (*h && *n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
