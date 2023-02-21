#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowecase
 * followed by a new line
 * Return: 0 if the code run successfuly
 */
void print_alphabet_x10(void)
{
int i = 0;
char letter;

while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
