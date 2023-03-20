#include "main.h"

/**
* _strstr - first occurrence of the substring needle in the string haystack
* @haystack: main str to be examined
* @needle: searched in haystack
* Return: return 0
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
{
return (haystack + i);
}
else if (needle[i] == '\0')
{
break;
}
}
}
return (0);
}
