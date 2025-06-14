#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: index of the bit (starting from 0)
 *
 * Return: value of the bit (0 or 1), or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

return ((n >> index) & 1);
}
