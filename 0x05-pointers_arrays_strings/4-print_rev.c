#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: char data type
 */
void print_rev(char *s)
{
int i;
int m = _strlen(s);

for (i = m; s[i] != '\0'; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
