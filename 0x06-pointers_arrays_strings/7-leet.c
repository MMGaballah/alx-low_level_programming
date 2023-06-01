#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: given string.
 *
 * Return: all changed vowels
 */
char *leet(char *s)
{
char q[] = "aeotlAEOTL";
char w[] = "4307143071";
int i = 0;
int f;
while (*(s + i) != '\0')
{
for (f = 0; f <= 9; f++)
{
if (*(s + i) == q[f])
{
*(s + i) = w[f];
}
}
i++;
}
return (s);
}
