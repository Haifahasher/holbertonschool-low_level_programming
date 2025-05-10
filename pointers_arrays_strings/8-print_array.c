#include "main.h"
/**
 * print - outputs a long integer to stdout using _putchar
 * @n: the number to print
 */

void print(long n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print(n / 10);
_putchar(n % 10 + '0');
}
/**
 * print_array - print an array of int with putchar
 * @a: array of int
 * @n: lenght of array
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= (n - 1); i++)
{
if (i < (n - 1))
{
print(a[i]);
_putchar(',');
_putchar(' ');
}
else
{
print(a[i]);
}
}
_putchar('\n');
}
