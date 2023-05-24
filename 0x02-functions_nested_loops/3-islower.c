#include "main.h"
/**
 * _islower - a function to see of char is lower case
 *@c: char to check
 *Description: a function to see if char is lowercase or not
 *
 * Return: 1 or 0.
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
