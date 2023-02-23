#include "main.h"
#include <ctype.h>
/**
 * _isupper - function to print lower case
 *
 * @c: is a variable
 * isupper - fucntion to see if char is upper case;
 *
 * Return: 1 if upper case letter
 * Retrun: 0 if lower case letter
 */
int _isupper(int c)
{
if (isupper(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
