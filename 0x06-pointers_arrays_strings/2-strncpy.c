#include "main.h"
/**
 * _strncpy - copy null char from terminated string
 *@dest: string to be combined
 *@src: string to be combined
 *@n: number
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
*(dest + a) = *(src + a);
for ( ; a < n; a++)
*(dest + a) = '\0';
return (dest);
}
