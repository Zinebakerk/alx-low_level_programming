#include "main.h"
/**
 * print_alphabet - Print alphabets using _putchar followed by a new line
 * Return: 0 if the test passed successfuly
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
