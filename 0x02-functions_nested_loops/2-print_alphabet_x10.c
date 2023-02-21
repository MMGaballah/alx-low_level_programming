#include "main.h"

/**
 * print_alphabet_x10 - function to out puts lower case letters of alphabet;
 * for loop - to cycle through _putchar;
 * _putchar - to print charcters one at a time;
 * Return - Always 0;
 */

void print_alphabet_x10(void)
{
int a;
char b;
for (a = 0; a <= 9; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
