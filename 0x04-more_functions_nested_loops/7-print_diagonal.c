#include "main.h"
/**
 *print_diagonal - function to print diogonally
 *
 *@n: a variable
 *
 *Return: Always 0
 */
void print_diagonal(int n)
{
int x;
int z = 1;
if (n == 0)
{
_putchar('\n');
}
else if (n < 0)
{
_putchar('\n');
}
else
{
for (x = 1 ; x <= n; x++)
{
while (z < n){
_putchar(' ');
z++;
}
_putchar('\\');
}
_putchar('\n');
}
}
