#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int z;
for (z = 0; z < 10; z++)
{
putchar(a[z]);
}
putchar('\n');
return (0);
}
