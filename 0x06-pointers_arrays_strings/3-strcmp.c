#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: first string given
 *@s2: second string given
 *Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
do {
s1++;
s2++;
} while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2);
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
