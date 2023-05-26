#include "main.h"
/**
 * _isdigit - a function to see if digit
 *@c: what to check
 *Description: a function to see if digit  or not
 *
 * Return: 1 or 0.
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
