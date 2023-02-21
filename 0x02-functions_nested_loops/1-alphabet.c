#include "main.h"
/**
 * print_alphabet - function to out puts lower case letters of alphabet;
 * for loop - to cycle through _putchar;
 * _putchar - to print charcters one at a time;
 * Return - Always 0;
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
