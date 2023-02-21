#include "main.h"
/**
 * print_sign - function to print sign;
 *
 * @n: is a variable;
 * 
 * return:1, 0 and -1;
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(' ');
return (0);
}
else if (n < 0)
{
_putchar('-');
_putchar(' ');
return (-1);
}
return (0);
}
