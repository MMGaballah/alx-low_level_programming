#include "main.h"
/**
 * _isupper - a function to see of char is upper case
 *@c: char to check
 *Description: a function to see if char is upper case or not
 *
 * Return: 1 or 0.
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
