#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints integers separated by a given string, then a newline
 * @separator: string to print between numbers (if not NULL)
 * @n: number of integer arguments passed to the function
 *
 * If separator is NULL, only the numbers are printed consecutively.
 * A newline is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int value;

va_start(ap, n);
for (i = 0; i < n; i++)
{
value = va_arg(ap, int);
if (separator != NULL && i > 0)
printf("%s", separator);
printf("%d", value);
}
va_end(ap);
printf("\n");
}
