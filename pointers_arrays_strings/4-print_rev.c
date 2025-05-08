#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: Uses two pointers to locate the end of the string
 *              and then prints characters backward using _putchar.
 */
void print_rev(char *s)
{
char *end = s;

/* move end pointer to the null terminator */
while (*end)
end++;

/* print characters in reverse */
while (end-- > s)
_putchar(*end);
_putchar('\n');
}
