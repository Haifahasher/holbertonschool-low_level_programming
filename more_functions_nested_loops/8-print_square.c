#include "main.h"

/**
 * print_square - prints square n times
 * @size: n times
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');
else
{
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
_putchar('#');
_putchar('\n');
}
}
}
