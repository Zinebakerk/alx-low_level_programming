#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: char data type
 * Return: capitalized words
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[0] >= 97 && str[0] <= 122)
{
str[0] -= 32;
}
if (str[i] == 46 || str[i] == 10
|| str[i] == 9 || str[i] == 32 || str[i] == 33
|| str[i] == 39  || str[i] == 40 || str[i] == 41
|| str[i] == 34 || str[i] == 59 || str[i] == 123
|| str[i] == 125)
{
if (str[i + 1] >= 97 && str[i + 1] <= 122)
{
str[i + 1] -= 32;
}
}
}
return (str);
}
