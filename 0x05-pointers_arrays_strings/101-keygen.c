#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int random;
int counter;
int total;

srand(time(NULL));
for (counter = 0, total = 2772; total > 122; counter++)
{
random = (rand() % 120) + 1;
printf("%c", random);
total -= random;
}
printf("%c", total);
return (0);
}
