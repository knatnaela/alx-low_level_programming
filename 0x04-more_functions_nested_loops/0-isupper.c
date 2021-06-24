#include "holberton.h"
/**
 * _isupper - checks for uppercase character.
 *@c: the character or ascii code 
 * Returns 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
int result;
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
