#include "main.h"
/**
 * string_toupper - function that changes all the
 * lowercase letters of a stirng to uppercase
 * Return: uppercase letters
 *@str: char data type
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
else
{
str[i] = str[i];
}
}
return (str);
}
