#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 *@c: the character or ascii code 
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
int result;
if (c >= 65 && c <= 90)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
