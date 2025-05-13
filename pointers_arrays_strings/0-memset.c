#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @c: the byte value to set
 * @n: number of bytes to be filled
 * Return: pointer to the memory area s
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int i;
unsigned char *memory = s, value = c;

for (i = 0; i < n; i++)
memory[i] = value;

return (memory);
}
