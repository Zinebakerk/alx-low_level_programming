#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int num;
unsigned long int sep;

sep = n ^ m;
num = 0;
while (sep)
{
num++;
sep &= (sep - 1);
}
return (num);
}
