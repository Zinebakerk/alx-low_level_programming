#include "main.h"
/**
* leet - function that encodes a string into 1337
* @str: char data type
* Return: enoded result into 1337
*/
char *leet(char *str)
{
int i, j;
char change[] = "aAeEoOtTlL";
char le[] = "43071";

i = 0;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; change[j] != '\0'; j++)
if (str[i] == change[j])
str[i] = le[j / 2];
}
return (str);
}
