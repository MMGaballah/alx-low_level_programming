#include "main.h"
/**
 *
 *
 *
 *
 *
 */
void times_table(void)
{
int multi[] = {0,1,2,3,4,5,6,7,8,9};
int mult[] = {0,1,2,3,4,5,6,7,8,9};
int x;
int y;
int a;
for (x = 0;x <= 9 ;x++)
{
for (y = 0;y <= 9 ;y++)
{
a=(mult[y] * multi[x]);
_putchar(a);
}
}
}
