#include <stdio.h>
/**
 * main - main block
 * print all possible combinationsof single-digit
 * Return: 0 if code executed successfuly
 */
int main(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = 1; j < 10; j++)
{
if (j > i)
{
putchar(i + 48);
putchar(j + 48);
}
if (j > i && i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
