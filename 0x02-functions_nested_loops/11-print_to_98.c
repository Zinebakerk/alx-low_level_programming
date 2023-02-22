#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
	int num = n;

	while (num != 98)
	{
		if (num < 98)
		{
			printf("%d, ", num);
			num++;
		}
		else if (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
printf("%d\n", num);
}
