#include "main.h"
#include <ctype.h>
/**
 * _islower - return value based on if else result;
 * c is varaible;
 * islower - fucntion to see if char is lower case;
 * (int c) - given from main to use in function;
 * Return - Always 0;
 * Retrun - Alawys 1;
 */
int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
