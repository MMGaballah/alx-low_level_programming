#include "main.h"
/**
 * puts2 - print string
 * @str: value
 *
 *Return: void
 */

void puts2(char *str)
{
int a = 0;
int s;

while (str[a] != '\0')
{
a++;
}
for (s = 0; s < a; s = s + 2)
{
_putchar(str[s]);
}
_putchar('\n');
}
