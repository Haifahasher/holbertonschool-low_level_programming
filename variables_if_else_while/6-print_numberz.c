#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0,
*followed by a newline
*
* Return: Always 0.
*/
int main(void)
{

int i;
for (i = 0; i < 10; i++)
putchar('0' + i);
putchar('\n');

return (0);
}
