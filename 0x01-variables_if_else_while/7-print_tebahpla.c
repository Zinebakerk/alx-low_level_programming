#include <stdio.h>
/**
 * main - main block
 * print the alphabet recusively
 * Return: 0 if code executed successfuly
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
