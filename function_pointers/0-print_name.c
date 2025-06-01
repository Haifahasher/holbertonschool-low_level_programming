#include "function_pointers.h"

/**
 * print_name - prints a name using the provided callback
 * @name: name to print
 * @f: function pointer that takes a string and prints it
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
