#include "main.h"
/**
 * _memcpy - copies memmory area
 *@src: a value
 *@n: a second value
 *@dest: what to copy
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
