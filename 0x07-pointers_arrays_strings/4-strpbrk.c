#include "main.h"
/**
 * _strpbrk - cheacks string for byte set
 *@s: a value
 *@accept: a second value
 * Return: a char
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0;
while (*s)
{
while (accept[a] != '\0')
{
if (*s == accept[a])
{
return (s);
}
a++;
}
a = 0;
s++;
}
return ('\0');
}
