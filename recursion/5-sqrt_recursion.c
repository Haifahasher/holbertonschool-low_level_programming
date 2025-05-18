#include "main.h"

/**
 * sqrt_helper - recursively searches for the natural square root of n
 * @n: the number to find the square root of
 * @i: current candidate root
 *
 * Return: the integer square root if found, or -1 if no natural root exists
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute the square root for
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
