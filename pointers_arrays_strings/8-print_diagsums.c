#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix (flattened as 1D array)
 * @size: the number of rows and columns of the square matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_main = 0;
int sum_secondary = 0;

for (i = 0; i < size; i++)
{
sum_main += a[i * size + i];
sum_secondary += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum_main, sum_secondary);
}
