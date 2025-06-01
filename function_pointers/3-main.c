#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for simple calculator
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Usage: calc num1 operator num2
 * Prints the result followed by a newline.
 *
 * Error cases (with exit status):
 *   - Wrong argument count   -> 98
 *   - Invalid operator       -> 99
 *   - Division or modulo by 0 -> 100
 *
 * Return: 0 on success, or exits with one of the error codes above.
 */
int main(int argc, char *argv[])
{
int (*f)(int, int);
int a, b, result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[2][1] == '\0' && b == 0)
{
printf("Error\n");
exit(100);
}

result = f(a, b);
printf("%d\n", result);
return (0);
}
