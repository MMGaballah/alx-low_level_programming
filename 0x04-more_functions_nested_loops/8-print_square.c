#include "main.h"
/**
 *print_square - function to print square
 *
 *@size: a parameter
 *
 *Return: Always 0
 */
void print_square(int size)
{
int x = 0;
int z;
if (size == 0)
{
_putchar('\n');
}
else if (size < 0)
{
_putchar('\n');
}
else
{
while (x < size)
{
z = 0;
while (z < size)
{
_putchar('#');
z++;
}
_putchar('\n');
x++;
}
}
}
