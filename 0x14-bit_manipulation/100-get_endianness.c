#include "main.h"
/**
* get_endianness - Check the endianess
* Return: 0 if big endianas , 1if it wasa little
*/

int get_endianness(void)
{
unsigned int x;
char *c;

x = 1;
c = (char *) &x;

return ((int)*c);
}
