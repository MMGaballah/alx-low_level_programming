#include "main.h"
/**
 *more_numbers - function to put more numbers
 *
 *
 *Return: Always 0
 *
 */
void more_numbers(void)
{
char num[20] = "01234567891011121314";
int x;
int y;
for (x = 0 ; x <= 9 ; x++)
{
for (y = 0 ; y < 20 ; y++)
{
_putchar(num[y]);
}
_putchar('\n');
}
}
