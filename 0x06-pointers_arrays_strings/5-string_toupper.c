#include "main.h"
/**
 * string_toupper - make string upper case
 *@s: given string
 * Return: upper cased string
 */
char *string_toupper(char *s)
{
int a = 0;

while (*(s + a) != '\0')
{
if (*(s + a) >= 'a' && *(s + a) <= 'z')
{
*(s + a) = *(s + a) - 32;
}
a++;
}
return (s);
}
