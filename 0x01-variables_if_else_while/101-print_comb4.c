#include <stdio.h>
/**
*  * main - main block
*   * print all possible combinationsof single-digit
*    * Return: 0 if code executed successfuly
*     */
int main(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = 1; j < 9; j++)
{
for (k = 2; k < 10; k++)
{
if (k > j && j > i)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);
}
if (j > i && i < 7 && k > j)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
