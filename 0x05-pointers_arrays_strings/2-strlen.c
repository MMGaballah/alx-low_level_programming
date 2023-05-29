#include "main.h"
/**
  * _strlen - gets length of string
  * @s: value
  *
  * Return: a
  */

int _strlen(char *s)
{
int a = 0;

for (; *s != '\0'; s++)
{
a++;
}
return (a);
}
