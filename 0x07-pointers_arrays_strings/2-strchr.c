#include "main.h"
/**
 * _strchr - find char in string
 *@s: a value
 *@c: a second value
 * Return: a char
 */
char *_strchr(char *s, char c)
{
if (*s == '\0')
{
return (s);
}
else
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
}
if (c == '\0')
{
return (s);
}
return ('\0');

}
