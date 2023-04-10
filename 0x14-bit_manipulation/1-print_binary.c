#include "main.h"
#include <stdio.h>

/**
 * print_binary -function that  prints binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int temp;
int counters;

if (n == 0)
{
printf("0");
return;
}

for (temp = n, counters = 0; (temp >>= 1) > 0; counters++)
;

for (; counters >= 0; counters--)
{
if ((n >> counters) & 1)
printf("1");
else
printf("0");
}
}
