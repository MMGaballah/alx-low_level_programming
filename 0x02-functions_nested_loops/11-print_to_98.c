#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function to print natural num
 *
 *@n: parameter 
 *
 *
 *Return: always 0
 */
void print_to_98(int n)
{
int a;
if (n >= 0 && n <= 98 )
{	
for (a = n ; a <= 98;a++)
{
if(a != 98)
{
printf("%d, ",a);
}
else if (a == 98)
{
printf("%d",a);
printf("\n");
}
}
_putchar('\n');
}
else if (n < 0 )
{
for (a = n ; a <= 98;a++)
{
if (a != 98)
{
printf("%d, ",a);
}
else if (a == 98)
{
printf("%d",a);
printf("\n");
}
}
_putchar('\n');
}
else if (n > 98)
{
for (a = n; a >= 98;a--)
{
if (a != 98)
{	
printf("%d, ",a);
}
else if (a == 98)
{
printf("%d",a);
printf("\n");
}
}
_putchar('\n');
}
else if (n == 98)
{
printf("%d, ",n);
}
}
