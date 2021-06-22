#include "holberton.h"

/* more headers goes there */
/**
* _islower - Entry point
*
* Return: Always 0 (Success)
*/
/* 
Returns 1 if c is lowercase
Returns 0 otherwise
 */
int _islower(int c)
{
int result;
if (c >= 97 && c <= 122)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
