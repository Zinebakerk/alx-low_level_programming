# include "main.h"
/**
 * times_table - function that prints the 9 times table
 * format
 */
void times_table(void)
{
int i = 0;
int j;
int result;

while (i < 10)
{
	j = 0;
	while (j < 10)
	{
		result = i * j;

		if (result > 9)
		{
			_putchar((result / 10) + '0');
			_putchar(result % 10 + '0');
		}
		else if (j != 0)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar(result + '0');
		}
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		j++;
	}
	_putchar('\n');
	i++;
}
}
