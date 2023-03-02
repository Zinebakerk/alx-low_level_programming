#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest : char data type
 * @src : char data type
 * @n: integer data type
 * Return: pointer to the resulting string desit
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
