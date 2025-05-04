#include <stdio.h>
/**
* main - prints the alphabet in lowercase, without 'e' or 'q',
*
* Return: Always returns 0
*
*/
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
if (a != 'e' && a != 'q')
putchar(a);
putchar('\n');
return (0);
}
