#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function to print alphabet
 *
 * @c: is a variable
 * isalpha - fucntion to see if alphabet or not;
 *
 * Return: 1 if alphabet letter
 * Retrun: 0 if not alphabet letter
 */
int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
