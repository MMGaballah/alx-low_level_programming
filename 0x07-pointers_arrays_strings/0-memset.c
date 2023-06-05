#include "main.h"
/**
 * _memset - fills memmory with constant bytes
 *@s: a value
 *@b: a second value
 *@n: a third value
 * Return: a full memmory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
