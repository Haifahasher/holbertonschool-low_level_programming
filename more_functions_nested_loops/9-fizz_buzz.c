#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 with FizzBuzz rules
 * Return: 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
printf("Fizz");
if ((i % 5) == 0)
printf("Buzz");
if ((i % 3) != 0 && (i % 5) != 0)
printf("%d", i);
if (i <= 99)
putchar(' ');
}
putchar('\n');
return (0);
}
