#include "main.h"
/**
  * rev_string - Prints string in reverse
  * @s: string to print
  *
  * Return: void
  */
void rev_string(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}

for (a = a - 1; a >= 0; a--)
{
_putchar(s[a]);
}

_putchar('\n');
}
