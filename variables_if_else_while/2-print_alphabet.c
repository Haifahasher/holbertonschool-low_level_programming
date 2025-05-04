#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a newline
*
* Return: Always 0
*/
int main(void)
{
char a;

for (a = "a"; a <= "z"; a++)
putchar(a);
putchar("\n");

return (0);
}
