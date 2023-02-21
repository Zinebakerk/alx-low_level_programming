#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n : data type integer
 * Return: the last value of a digit
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
{
a = -1 * (n % 10);
_putchar(a + '0');
return (a);
}
else
{
a = n % 10;
_putchar(a + '0');
return (a);
}
}
