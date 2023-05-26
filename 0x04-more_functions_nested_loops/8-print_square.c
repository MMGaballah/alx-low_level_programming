#include "main.h"
/**
 * print_square - print square - a function to print square
 *@n: given from main
 *Description: a printing function for square
 *
 * Return: void.
 */
void print_square(int n)
{
int s = 0;
int a = 0;
if (n > 0)
{
for (s = 0; s < n; s++)
{
for (a = 0; a < n; a++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
