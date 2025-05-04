#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints the lowercase alphabet followed by a newline
* Return: void
*/
void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
putchar('\n');
}
