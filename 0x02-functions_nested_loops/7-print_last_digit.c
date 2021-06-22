#include "holberton.h"
#include "6-abs.c"
/* more headers goes there */
/**
* print_last_digit - Entry point
*@n: number
*Return: last digit
*/
/* betty style doc for function main goes there */
int print_last_digit(int n)
{
int result;
result = n % 10;
result = _abs(result);
_putchar(result + '0');
return (result);
}
