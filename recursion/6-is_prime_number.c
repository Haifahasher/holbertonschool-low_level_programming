#include "main.h"

/**
 * check_prime - recursively checks if n is divisible by any i
 * @n: the number to check
 * @i: current divisor candidate
 *
 * Return: 1 if no divisors found (prime), 0 otherwise
 */
static int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (check_prime(n, 2));
}
