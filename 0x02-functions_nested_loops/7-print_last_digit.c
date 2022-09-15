#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - Entry point
 *@c:  is the int that will use for the argument of the function
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
if (c <= 0)
{
c = c * -1;
_putchar (c % 10 + '0');
return (c % 10);
}
else
{
_putchar (c % 10 + '0');
return (c % 10);
}
}
