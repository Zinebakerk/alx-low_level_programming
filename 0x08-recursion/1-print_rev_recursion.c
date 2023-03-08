#include "main.h"
#include <string.h>

/**
* rev_recursion - function that prints a string in reverse
* @s: char data type
* @n: int data type
*/

void rev_printer(char *s, int n)
{
if (n < 0)
return;
_putchar(*(s + n));
rev_printer(s, n - 1);
}

/**
* _print_rev_recursion - recursively print a string from end to start
* @s: a char
* Return: void
*/

void _print_rev_recursion(char *s)
{
int n = strlen(s);
rev_printer(s, n - 1);
}
