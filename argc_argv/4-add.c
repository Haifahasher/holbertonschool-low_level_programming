#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two integers passed as arguments
 * @argc: number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int a, b, sum;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
sum = a + b;
printf("%d\n", sum);

return (0);
}
