#include "main.h"
/**
 * print_square - prints a square
 * @size: size
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;
while (i < size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
while (j < size)
{
_putchar(35);
j++;
}
j = 0;
_putchar('\n');
}
i++;
}
}
