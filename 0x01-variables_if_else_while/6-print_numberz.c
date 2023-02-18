#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase
 * Return: 0 if code executed successfuly
 */
int main(void)
{
int a;
a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
