#include <stdio.h>
/**
 * main - main block
 * print all  possible combinations of single-digit numbers.
 * Return: 0 if code executed successfuly
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
