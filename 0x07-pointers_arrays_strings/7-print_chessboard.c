#include "main.h"
/**
 * print_chessboard - prints a chest board
 *@a: a value
 *
 *
 */
void print_chessboard(char (*a)[8])
{
int c;
int b;
for (c = 0; c < 8; c++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[c][b]);
}
_putchar('\n');
}
}
