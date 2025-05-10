#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string containing characters
 */
void puts_half(char *str)
{
int i = 0, length = 0;

while (str[i++])
{
length++;
}
for (i = 0; i <= (length - 1); i++)
{
if ((length % 2) == 0)
{
if (i >= (length / 2))
{
_putchar(str[i]);
}
}
if ((length % 2) != 0)
{
if (i >= ((length + 2) / 2))
{
_putchar(str[i]);
}
}
}
_putchar('\n');
}
