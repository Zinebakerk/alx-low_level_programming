#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer number.
 * @index: position where is required to set the bit.
 *
 * Return: nothing.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number;

	number = 1 << index;
	if (index > 63)
		return (-1);
	*n = *n | number;
	return (1);
}
