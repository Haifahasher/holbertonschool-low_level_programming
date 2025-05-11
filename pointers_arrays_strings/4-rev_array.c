#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 * Swaps elements from the ends towards the center
 * until the entire array is reversed.
 */
void reverse_array(int *a, int n)
{
int tmp, i;

for (i = n - 1; i >= n / 2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
