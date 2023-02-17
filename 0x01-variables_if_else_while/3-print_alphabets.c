#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase and uppercase
 * Return: 0 if code executed successfuly
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
