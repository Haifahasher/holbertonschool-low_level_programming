#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbers of times that prints '_'
 */
void print_line(int n)
{
int i = 1;

while (i <= n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
