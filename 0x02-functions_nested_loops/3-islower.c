#include "holberton.h"

/* more headers goes there */
/**
* _islower - Entry point
*@c: The character or ascii code
*Return: 0 or 1
*/
/* betty style doc for function main goes there */
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
