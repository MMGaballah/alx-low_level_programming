#include "main.h"
/**
 * print_diagonal - print diagonal - a function to print diagonal
 *@n: given from main
 *Description: a printing function for diagonal
 *
 * Return: void.
 */
void print_diagonal(int n)
{
int s = 0;
int t = 0;
if (n > 0)
{
while (s < n)
{
while (t < s)
{
_putchar(' ');
t++;
}
s++;
t = 0;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
