#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by a given string, then a newline
 * @separator: string to print between each argument (if not NULL)
 * @n: number of string arguments passed
 *
 * If a string argument is NULL, prints "(nil)" in its place.
 * If separator is NULL, no separator is printed.
 * Always ends with a newline.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}
