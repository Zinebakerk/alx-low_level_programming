#include "main.h"
/**
 * _puts - function that outpusts characters
 * @str: char data type
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
