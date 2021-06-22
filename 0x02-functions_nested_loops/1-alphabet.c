#include "holberton.h"
/* more headers goes there */
/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
if (alphabet == 'z')
_putchar('\n');
}
}
