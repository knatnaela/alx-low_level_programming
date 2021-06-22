#include "holberton.h"

/**
 *_abs - computes absolute number of in integer
 *@n: parameter character or code ascii
 *Return: 0
 */
int _abs(int n)
{
int result;
if (n > 0)
{
result = 1 * n;
}
else
{
result = n *  -1;
}
return (result);
}
