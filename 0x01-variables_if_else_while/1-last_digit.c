#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
  int n,num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
{
printf("Last digit of %d and %d is greater than %d\n", n,num,5);
}
else if (num < 6)
{
printf("Last digit of %d is less than %d and not 0\n", n,num,6);
}
else if (num == 0)
{
printf("Last digit of %d is %d and is %d\n", n,num,0);
}
return (0);
}
