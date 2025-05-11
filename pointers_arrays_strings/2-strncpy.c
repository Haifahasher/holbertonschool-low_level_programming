#include "main.h"

/**
 * _strncpy - copies up to n bytes of a string, padding with '\0' if needed
 * @dest: destination buffer to copy into
 * @src: source string to copy from
 * @n: maximum number of bytes to copy
 *
 * Description: Copies at most n characters from src to dest. If src is shorter
 * than n, the remainder of dest is padded with null bytes. Does not use
 * standard library functions.
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i]; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
