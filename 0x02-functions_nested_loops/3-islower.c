#include "main.h"
#include <ctype.h>
/**
 * _islower - function to print lower case
 *
 * @c: is a variable
 * islower - fucntion to see if char is lower case;
 *
 * Return: 1 if lower case letter
 * Retrun: 0 if not lower case letter
 */
int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
