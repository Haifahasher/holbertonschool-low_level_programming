#include <stdio.h>

/**
* main - prints all single-digit numbers of base 10 separated by
* a comma and a space, followed by a newline
*
* Return: Always 0
*/
int main(void)
{
int main(void)
{
int number;

for (number = '0'; number <= '9'; number++)
{
putchar(number);
if (number != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
