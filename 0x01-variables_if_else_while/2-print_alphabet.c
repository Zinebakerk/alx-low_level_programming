# include <stdio.h>
/**
 * main - main block
 * print the alphabet in lowercase
 * Return: 0 if code executed successfuly
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
