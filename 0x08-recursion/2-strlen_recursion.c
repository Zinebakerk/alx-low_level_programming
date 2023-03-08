#include "main.h"

/**
 * counter - a string lenthe counter
 * @count: an int to count a number
 * @s: a character
 * Return: the count
 */

int counter(int count, char *s)
{
if (*s == '\0')
return (count);
count++;
return (counter(count, s + 1));
}

/**
 * _strlen_recursion - a recursive way to find a length of a string
 * @s: a string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
return (counter(0, s));
}
