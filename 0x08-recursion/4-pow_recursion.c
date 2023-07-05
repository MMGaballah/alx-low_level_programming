#include "main.h"
/**
 * _pow_recursion - returns x to the power of y
 * @x: int
 * @y: int
 * Return: 1
 * On error Return -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
