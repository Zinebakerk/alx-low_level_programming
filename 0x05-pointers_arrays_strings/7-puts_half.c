#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str : char data type
 */
void puts_half(char *str)
{
int i;
int half;
int j;
for (i = 0; str[i] != '\0'; i++)
{
}
i++;
half = i / 2;
for (j = half ; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
