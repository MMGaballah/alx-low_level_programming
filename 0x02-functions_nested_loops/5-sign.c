#include "main.h"
/**
 * print_sign - a function to print number signs
 *@n: char to check
 *Description: a function to print signs of a number and return a value
 *
 * Return: 1 or 0 or -1.
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
