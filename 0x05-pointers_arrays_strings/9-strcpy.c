#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: char data type
 * @src: char data type
 * including the terminating null byte (\0)
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
