#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: pointer to an array of 8 rows, each row is an array of 8 chars
 */
void print_chessboard(char (*a)[8])
{
int row, col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
_putchar(a[row][col]);
}
_putchar('\n');
}
}
