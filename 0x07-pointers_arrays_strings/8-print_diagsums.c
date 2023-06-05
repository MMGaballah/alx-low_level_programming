#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sum of two diagonals
 *@a: a value
 *@size: a second value
 *
 *
 */
void print_diagsums(int *a, int size)
{
int c;
int b;
int sum1 = 0;
int sum2 = 0;
int s = size - 1;
int v = 0;
for (c = 0; c < size; c++)
{
for (b = 0; b < size; b++)
{
if (c == b)
{
sum1 = sum1 + a[v];
}
if (b == s)
{
sum2 = sum2 + a[v];
}
v++;
}
s--;
}
printf("%i,%i\n", sum1, sum2);
}
