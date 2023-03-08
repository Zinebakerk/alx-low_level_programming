#include "main.h"
/**
 * _pow_recursion - a function to calculate the x raised to y
 * @x: the base
 * @y: the exponent
 * Return: the answer of the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y ==  0)
return (1);
if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}

