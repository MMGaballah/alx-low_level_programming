#include "main.h"
/**
 * _strcat - put two strings together
 *@dest: string to be combined
 *@src: string to be combined
 * Return: 0
 */
char *_strcat(char *dest, char *src)
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
} while (*(src + s) != '\0' && d < 97);

*(dest + d) = '\0';
return (dest);
}
