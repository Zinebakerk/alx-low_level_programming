#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: char data type
* @src: char data type
* @n: int data type
* Return: result coming from dest
*/
char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; n > i; i++)
dest[i] = '\0';

return (dest);

}
