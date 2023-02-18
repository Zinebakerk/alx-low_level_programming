#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase
 * Return: 0 if code executed successfuly
 */
int main(void)
{
char c;
int d;
c = 'a';
d = 0;
while (d < 10)
{
putchar(d + '0');
d++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
