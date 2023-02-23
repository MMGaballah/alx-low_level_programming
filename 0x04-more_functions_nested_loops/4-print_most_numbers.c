#include "main.h"
/**
 *print_most_numbers - print numbers
 *
 *
 *ReturnL Always 0
 */
void print_most_numbers(void)
{
char num[8] = "01356789";
int x;
for (x = 0 ; x < 8; x++)
{
_putchar(num[x]);
}
_putchar('\n');
}
