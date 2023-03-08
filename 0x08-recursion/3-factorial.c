#include "main.h"
/**
 * factorial - a recursive function to calculat a factorial of a given function
 * @n: an integer to find factorial
 * Return: a factorial of a given n;
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1 || n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

