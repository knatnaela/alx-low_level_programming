#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
char a;
for(a = 'a'; a <= 'z'; a++)
{
putchar(a);
if (a == 'z')
putchar('\n');
}
return (0);
}
