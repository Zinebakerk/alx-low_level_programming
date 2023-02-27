#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * @a: int data type
 * @n: int data type
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d", a[i]);
printf(", ");
}
}
printf("\n");
}
