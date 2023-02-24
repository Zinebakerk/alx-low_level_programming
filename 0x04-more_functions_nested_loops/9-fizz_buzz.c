#include "main.h"
/**
 * fizz_buzz - prints numbers from 1 to 100
 */
int main(void)
{
int b = 1;
while (b <= 100)
{
if (b % 3 == 0 && b % 5 == 0)
{
printf("FizzBuzz ");
}
else if (b % 3 == 0)
{
printf("Fizz ");
}
else if (b % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", b);
}
b++;
}
printf("\n");
return (0);
}
