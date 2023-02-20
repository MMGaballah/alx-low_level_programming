#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char qe[26] = "abcdfghijklmnoprstuvwxyz";
char v = '\n';
int x;
for (x = 0 ; x < 26 ; x++)
{
putchar (qe[x]);
}
putchar (v);
return (0);
}
