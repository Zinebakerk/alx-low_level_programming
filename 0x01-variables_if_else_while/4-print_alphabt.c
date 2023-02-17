#include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase except e and q
 * Return: 0 if code executed successfuly
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
