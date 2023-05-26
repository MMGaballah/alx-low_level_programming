#include "main.h"
/**
 * print_line - print line - a function to print lines
 *@n: given from main
 *Description: a printing function for lines
 *
 * Return: void.
 */
void print_line(int n)
{
int s = 0;
if (n > 0)
{
while (s < n)
{
_putchar('_');
s++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
