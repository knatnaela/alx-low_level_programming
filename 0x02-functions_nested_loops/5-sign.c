#include "holberton.h"

/**
 * _isalpha - check the code for ALX School students.
*@c: The character or ascii code
*Return: 0 or 1
 */
int print_sign(int n)
{
int result;
if (n > 0)
{
_putchar('+');
result = 1;
}
else if (n < 0)
{
_putchar('0');
result = 0;
}
else
{
_putchar('-');
result = -1;
}
return (result);
}