#include "main.h"
/**
 * print_last_digit - a function to print last digit .
 *@n: char to check/.
 *Description: a function to get last digit of a number and return a value .
 *
 * Return: d .
 */
int print_last_digit(int n)
{
int d = n % 10;

if (d < 0)
d *= -1;

_putchar(d + '0');

return (d);


}
