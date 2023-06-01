#include "main.h"
/**
 * _strncat - put two strings together
 *@dest: string to be combined
 *@src: string to be combined
 *@n: a string size
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int s = 0;
do {
d++;
} while (*(dest + d) != '\0');

do {
*(dest + d) = *(src + s);
d++;
s++;
} while (*(src + s) != '\0' && d < 97 && s < n);

*(dest + d) = '\0';
return (dest);
}
