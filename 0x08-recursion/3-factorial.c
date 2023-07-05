#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: int
 * Return: 1
 * On error Return -1
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
