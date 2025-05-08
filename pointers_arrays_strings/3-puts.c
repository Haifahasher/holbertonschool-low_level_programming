#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description: Iterates through the string using pointer arithmetic
 *              and outputs each character with _putchar.
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}

