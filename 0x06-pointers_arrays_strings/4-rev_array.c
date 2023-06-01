#include "main.h"
/**
 * reverse_array - prints arry in reverse
 *@a: array givven
 *@n: size of given array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int tmp;
int s;
int w;
s = 0;
w = n - 1;
while (s < w)
{
tmp = *(a + s);
*(a + s) = *(a + w);
*(a + w) = tmp;
s++;
w--;
}
}
