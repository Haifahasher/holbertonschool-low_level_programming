#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98,
*               separated by a comma and a space,
*               followed by a new line.
* @n: the number to start printing from
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
printf("%d, ", n);
}
else
{
for (; n > 98; n--)
printf("%d, ", n);
}
printf("98\n");
}
