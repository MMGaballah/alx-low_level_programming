#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char qe[24] = "abcdfghijklmnoprstuvwxyz";
int x;
for (x = 0 ; x < 24 ; x++)
{
putchar (qe[x]);
}
putchar ('\n');
return (0);
}
