#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle (height and base lengt)
 */
void print_triangle(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 1; row <= size; row++)
{
for (col = 0; col < size - row; col++)
_putchar(' ');
for (col = 0; col < row; col++)
_putchar('#');
_putchar('\n');
}
}
