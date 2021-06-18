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
int num;
char ch;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
if (ch == 'f')
putchar('\n');
}
return (0);
}
