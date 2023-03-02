#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integer data type
 * @n: integer data type
 */
void reverse_array(int *a, int n)
{
int j, c;

for (j = 0; j < (n / 2) ; j++)
{
c = a[j];
a[j] = a[n - j - 1];
a[n - j - 1] = c;
}
}
