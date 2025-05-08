#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\\' should be printed
 *
 * Description: prints a diagonal line of length n using the '\\' character.
 *              Each line is offset by one additional space.
 *              If n is 0 or less, only a newline is printed.
 */
void print_diagonal(int n)
{
int co, sp;

if (n <= 0)
_putchar('\n');
else
{
for (co = 1; co <= n; co++)
{
for (sp = 1; sp < co; sp++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
