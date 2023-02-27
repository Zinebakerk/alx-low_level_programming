#include "main.h"
/**
 * swap_int - function that swaps the values of tow integers
 * @a: integer data type
 * @b: integer data type
 */
void swap_int(int *a, int *b)
{
int c;
int m;
c = *b;
m = *a;
*a = c;
*b = m;

}
