#include "main.h"
/**
* rev_string - function that reverses a string
* @s: char data type
*/
void rev_string(char *s)
{
int i, c, l;
char h;

for (i = 0; s[i] != '\0'; i++)
;

l = i;
for (i--, c = 0; c < l / 2; i--, c++)
{
h = s[c];
s[c] = s[i];
s[i] = h;
}
}
