#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
int started = 0;
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

while (mask)
{
if (n & mask)
{
_putchar('1');
started = 1;
}
else if (started)
{
_putchar('0');
}
mask >>= 1;
}

if (!started)
_putchar('0');
}
