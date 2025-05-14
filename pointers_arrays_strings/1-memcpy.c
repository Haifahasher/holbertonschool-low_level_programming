#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
unsigned int i;
unsigned char *destination = dest;
const unsigned char *source = src;

for (i = 0; i < n; i++)
destination[i] = source[i];

return (dest);
}
