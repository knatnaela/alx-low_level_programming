#include "holberton.h"
#include "1-alphabet.c"
/* more headers goes there */
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
void print_alphabet_x10(void)
{
int num;
for (num = 0; num <= 10; num++)
{
print_alphabet();
}
}
