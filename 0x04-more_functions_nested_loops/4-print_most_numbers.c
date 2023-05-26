#include "main.h"
/**
 * print_most_numbers - print most numbers - a function to print most digits
 *
 *Description: a printing function for digits 0 to 9 without 4 amd 2
 *
 * Return: void.
 */

void print_most_numbers(void)
{
int a;
for (a = 48; a <= 57; a++)
{
{
if (a != 50 && a != 52)
_putchar(a);
}
}
_putchar('\n');
}
