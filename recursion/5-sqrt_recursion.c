#include "main.h"

static int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n, or -1 if n < 0 or no natural root exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - recursively searches for the square root
 * @n: original number
 * @i: current candidate root
 *
 * Return: the square root if found, or -1 otherwise
 */
static int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}
