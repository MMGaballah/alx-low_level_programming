#include "main.h"
/**
 * print_alphabet_x10 - print alphabet - a function to print chars
 *
 *Description: a printing function for alphabet using chars X10
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
int i;
int a;
for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
