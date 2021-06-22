#include "holberton.h"
/* more headers goes there */
/**
* _islower - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */


int _islower(int c)
{
int result;
if (c >= 97 && c <= 122)
{
result = 1;
}else
{
result = 0;
}
return (result);
}