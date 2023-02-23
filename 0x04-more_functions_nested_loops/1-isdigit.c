#include "main.h"
#include <ctype.h>
/**
 * 1_isdigit - function to print lower case
 *
 * @c: is a variable
 * isdigit - fucntion to see if char is a digit;
 *
 * Return: 1 if is digit
 * Retrun: 0 if not a digit
 */
int _isdigit(int c)
{
if (isdigit(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
