#include "holberton.h"

/**
 * _isalpha - check the code for ALX School students.
*@c: The character or ascii code
*Return: 0 or 1
 */
int _isalpha(int c)
{
int result;
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
