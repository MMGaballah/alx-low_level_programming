#include "main.h"
/**
 * _puts_recursion - print string and then new line
 * @s: string
 * Return: 1
 */
void _puts_recursion(char *s)
{
if (*s == 0)
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
