#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument ("+", "-", "*", "/", or "%")
 *
 * Return: pointer to the corresponding function, or NULL if none matches
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
if (ops[i].op[0] == s[0] && s[1] == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
