#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z;
for (z = 0; z <= 9; z++)
{
putchar(z + 48);
if (z == 9)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
