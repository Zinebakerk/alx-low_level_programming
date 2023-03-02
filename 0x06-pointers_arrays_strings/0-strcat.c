#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: char data type
 * @src: char data type
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
	;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}

