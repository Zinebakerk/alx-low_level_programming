#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int c = 0;

while (c < 15)
{
if (c > 9)
{
_putchar((c / 10) + 48);
}
_putchar(c % 10 + 48);
c++;
}
_putchar('\n');
}
}
