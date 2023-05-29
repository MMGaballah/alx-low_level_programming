#include "main.h"
/**
  * print_rev - Prints string in reverse
  * @s: string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}
for (a = a - 1l; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
