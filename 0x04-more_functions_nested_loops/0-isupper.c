#include "main.h"
/**
 * _isupper -function that checks for uppercase character
 * @c : integer data type
 * Return: 1 incase  c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
